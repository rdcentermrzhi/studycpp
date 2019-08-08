#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "mysql/mysql.h"
#include<string>
int main_mysqlconn(int argc, char *argv[])
{
	MYSQL *conn;
	MYSQL_RES *res;
	MYSQL_ROW row;

	std::string dbuser = "root";
	std::string dbpwd = "root";
	std::string dbhost = "localhost";
	unsigned int dbport = 3306;
	std::string table_name = "simplerechargelog";
	std::string db_name = "test";

	char sql_tmp[100];
	std::string sql;
	int ret;

	unsigned i;

	conn = mysql_init((MYSQL*)0);

	if (conn != NULL && mysql_real_connect(conn, dbhost.c_str(), dbuser.c_str(), dbpwd.c_str(), db_name.c_str(), dbport, NULL, 0))
	{
		if (!mysql_select_db(conn, db_name.c_str()))
		{
			printf("select successfully the database\n");
			//conn->reconnect = 1;
			sql = "set names \'GBK\'";
			ret = mysql_real_query(conn, sql.c_str(), sql.length());
			if (ret)
			{
				printf("Error making query:%s!!!\n", mysql_error(conn));
			}
			else {
				printf("query %s!!!\n", sql.c_str());
			}
		}
		else
		{
			//MessageBoxA(NULL, "Unable to connect the database,check your configuration!", "", NULL);
			printf("Unable to connect the database, please check you configuration");
		}


		sql = "insert into simplerechargelog values(NULL,'1001','app','appid',1,3)";

		ret = mysql_real_query(conn, sql.c_str(), sql.size());

		if (ret)
		{
			printf("Error making query: %s !!!\n", mysql_error(conn));
		}
		else
		{
			printf("%s executed!!!\n", sql.c_str());
		}

		sprintf(sql_tmp, "select * from %s", table_name.c_str());

		ret = mysql_real_query(conn, sql_tmp, strlen(sql_tmp));

		if (ret)
		{
			printf("Error making query: %s !!!\n", mysql_error(conn));
		}
		else
		{
			printf("%s executed!!!\n",sql_tmp);
		}

		res = mysql_store_result(conn);

		while (row = mysql_fetch_row(res))
		{
			for (i = 0; i < mysql_num_fields(res); i++)
			{
				printf("%s", row[i]);
			}
			printf("\n");
		}

		mysql_free_result(res);
		mysql_close(conn);
	}

	system("pause");
	return 0;
}
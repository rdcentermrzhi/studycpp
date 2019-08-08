#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <memory>
#include <vector>
class Persion : public std::enable_shared_from_this<Persion>
{
public:
	std::string name_;
	std::shared_ptr<Persion> mom_;
	std::shared_ptr<Persion> dad_;

	//std::vector<std::shared_ptr<Persion>> kids;
	std::vector<std::weak_ptr<Persion>> kids;

	Persion(const std::string& name, std::shared_ptr<Persion> m = nullptr, std::shared_ptr<Persion> d = nullptr) :
		name_(name), mom_(m), dad_(d) 
	{
	}

	std::shared_ptr<Persion> get_ptr()
	{
		return shared_from_this();
	}

	~Persion()
	{
		std::cout << "delete Persion" << std::endl;
	}

};


std::shared_ptr<Persion> init(const std::string& name)
{
	std::shared_ptr<Persion> m = std::make_shared<Persion>(name + "'s mom");
	std::shared_ptr<Persion> d(new Persion(name + "'s dad"));
	std::shared_ptr<Persion> son(new Persion(name, m, d));

	m->kids.push_back(son);
	d->kids.push_back(son);

	return son;
}



int main(int argc,char *argv[])
{
	std::shared_ptr<Persion> x;
	{
		std::shared_ptr<Persion> p = init("nice");
		std::cout << p.use_count() << std::endl;
		std::cout << p->mom_->kids[0].lock()->name_.c_str() << std::endl;

		std::string a("acd");
		std::cout << a.c_str() << std::endl;
		x = p->get_ptr();
	}
	

	
	system("pause");
	return 0;
}
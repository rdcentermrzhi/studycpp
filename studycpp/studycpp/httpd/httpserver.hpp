#ifdef HTTP_SERVER_HPP
#define HTTP_SERVER_HPP

#include <boost/asio.hpp>





namespace http
{
namespace server
{



class server
{
public:
  server(const server&) = delete;
  server& operator=(const server&) = delete;

  explicit server(const std::string& address, const std::string& port,
      const std::string& doc_root);

  void run();

private:
  void do_accept();

  //Wait for a request to stop the server
  void do_await_stop();

  boost::asio::io_context io_context_;

  boost::asio::signal_set signals_;
  boost::asio::ip::tcp:acceptor acceptor_;
}













}
}











#endif

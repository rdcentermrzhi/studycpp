#ifndef HTTP_HEADER_HPP
#define HTTP_HEADER_HPP

#include <string>
namespace http
{
namespace server
{
struct header
{
  std::string name;
  std::string value;

};

}//namespce server
}//namepsace http

#endif //HTTP_HEADER_HPP

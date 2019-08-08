#ifndef HTTP_REQUEST_PARSER_HPP
#define HTTP_REQUEST_PARSER_HPP

#include <tuple>
#include "request.hpp"
namespace http
{
namespace server
{

class request_parser
{
public:
  request_parser();
  void reset();

  enum result_type {good, bad, indeterminate};

  template <typename InputIterator>
  std::tuple<result_type, InputIterator> parse(request &req,
      InputIterator begin, InputIterator end)
  {
    while(begin != end)
    {
      result_type result = consume(req, *begin++);
      if(result == good || result == good)
      {
        return std::make_tuple(result, begin);
      }
    }
    return std::make_tuple(indeterminate, begin);
  }

private:
  result_type consume(request &req, char input);
  static bool is_char(int c);
  static bool is_ctl(int c);
  static bool is_tspecial(int c);
  static bool is_digit(int c);

  enum state
  {
    method_start, 
    method, 
    uri,
    http_version_h,
    http_version_t_1,
    http_version_t_2,
    http_version_p,
    http_version_slash,
    http_version_major_start,
    http_version_major,
    http_version_minor_start,
    http_vession_minor,
    execpting_newline_1,
    header_line_start,
    header_lws,
    header_name,
    space_before_header_value,
    header_value,
    exception_newline_2,
    exception_newline_3,
  } state_;

};

}//namesapce server
}//namespace http


#endif //HTTP_REQUEST_PARSER_HPP

#ifndef BM_RECODER_SETTINGS_HPP__
#define BM_RECODER_SETTINGS_HPP__

/*=============================================================================
    Copyright (c) 2006 Roel Sergeant (rsergeant@gmail.com)
    http://www.rst.be/projects/bm
    http://recoder.berlios.de

    Use, modification and distribution is subject to the Boost Software
    License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/

#include <exception>
#include <map>
#include <string>

namespace bm {
	
namespace recoder {

  class invalid_settings_exception : public std::exception
  {

  };

  class settings_singleton
  {
  public:
    settings_singleton ();

    ~settings_singleton ();

    void check (int argc, char **argv) throws invalid_settings_exception;
    void check (std::string file_name) throws invalid_settings_exception;

    std::string get (const std::string setting) const;
    bool set (const std::string setting, const std::string value);

  private:
    std::map< std::string, std::string > settings_;
  };

} //recoder

} //bm

#endif //BM_RECODER_SETTINGS_HPP__

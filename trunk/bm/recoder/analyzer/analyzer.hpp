#ifndef BM_RECODER_ANALYZER_ANALYZER_HPP__
#define BM_RECODER_ANALYZER_ANALYZER_HPP__

/*=============================================================================
    Copyright (c) 2006 Roel Sergeant (rsergeant@gmail.com)
    http://www.rst.be/projects/bm
    http://recoder.berlios.de

    Use, modification and distribution is subject to the Boost Software
    License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/

#include <bm/recoder/lang/parser.hpp>
#include <bm/recoder/readers/reader.hpp>

namespace bm {

namespace recoder {

namespace analyzer {

  class analyzer
  {
  public:

  private:
    typedef bm::recoder::readers::reader_ptr reader;
    typedef bm::recoder::parsers::parser_ptr parser;

    std::vector< reader > readers; 
    std::vector< parser > parsers;
  };

} //analyzer

} //recoder

} //bm

#endif //BM_RECODER_ANALYZER_ANALYZER_HPP__

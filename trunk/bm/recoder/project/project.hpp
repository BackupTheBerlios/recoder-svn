#ifndef BM_RECODER_PROJECT_PROJECT_HPP__
#define BM_RECODER_PROJECT_PROJECT_HPP__

/*=============================================================================
    Copyright (c) 2006 Roel Sergeant (rsergeant@gmail.com)
    http://www.rst.be/projects/bm
    http://recoder.berlios.de

    Use, modification and distribution is subject to the Boost Software
    License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/

#include <bm/recoder/syntax/parsetree/parsetree.hpp>
#include <bm/recoder/syntax/syntax_map.hpp>

namespace bm {

namespace recoder {

namespace project {

  class project
  {

  private:
    bm::recoder::syntax::syntax_map_ptr map_;
    bm::recoder::syntax::parsetree_ptr parsetree_;

  };

} //project

} //recoder

} //bm

#endif //BM_RECODER_PROJECT_PROJECT_HPP__

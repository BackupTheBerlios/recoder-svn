#ifndef BM_RECODER_READERS_READER_HPP__
#define BM_RECODER_READERS_READER_HPP__

/*=============================================================================
    Copyright (c) 2006 Roel Sergeant (rsergeant@gmail.com)
    http://www.rst.be/projects/bm
    http://recoder.berlios.de

    Use, modification and distribution is subject to the Boost Software
    License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/

#include <boost/shared_ptr.hpp>

namespace bm {

namespace recoder {

namespace readers {

  class reader
  {

  };

  typedef boost::shared_ptr< reader > reader_ptr;

} //readers

} //recoder

} //bm

#endif //BM_RECODER_READERS_READER_HPP__

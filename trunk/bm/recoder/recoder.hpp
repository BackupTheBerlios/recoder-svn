#ifndef BM_RECODER_RECODER_HPP__
#define BM_RECODER_RECODER_HPP__

/*=============================================================================
    Copyright (c) 2006 Roel Sergeant (rsergeant@gmail.com)
    http://www.rst.be/projects/bm
    http://recoder.berlios.de

    Use, modification and distribution is subject to the Boost Software
    License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/

namespace bm {
	
namespace recoder {

  class application
  {
  public:
    application (int argc, char **argv);
    ~application ();
    
    void run ();
    
    bool ok ();
    
    void report ();
    void report_errors ();
    
    int last_error ();
    
  private:
    
  };
			
} //recoder

} //bm

#endif //BM_RECODER_RECODER_HPP__

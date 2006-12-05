
/*=============================================================================
    Copyright (c) 2006 Roel Sergeant (rsergeant@gmail.com)
    http://www.rst.be/projects/bm
    http://recoder.berlios.de
	
    Use, modification and distribution is subject to the Boost Software
    License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/

#include <bm/recoder/recoder.hpp>

int main (int argc, char **argv)
{
  bm::recoder::application *app 
    = new bm::recoder::application (argc, argv);
		
  app->run ();
  if (!app->ok ())
  {
    app->report_errors ();
  }
  app->report ();
  
  return app->last_error ();
}

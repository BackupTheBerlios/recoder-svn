#ifndef BM_RECODER_SYNTAX_NODES_NODE_HPP__
#define BM_RECODER_SYNTAX_NODES_NODE_HPP__

/*=============================================================================
    Copyright (c) 2006 Roel Sergeant (rsergeant@gmail.com)
    http://www.rst.be/projects/bm
    http://recoder.berlios.de

    Use, modification and distribution is subject to the Boost Software
    License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/

#include <boost/shared_ptr.hpp>

//-----------------------------------------------------------------------------
// Syntax Node Hierarchy
//-----------------------------------------------------------------------------
// node
//   definition_node
//     class_node
//     function_node
//       method_node
//     template_node
//       class_template_node
//       function_template_node
//         method_template_node
//   declaration_node
//     typedef_node
//     classdef_node
//     functiondef_node
//       methoddef_node
//     variable_node
//       constant_node
//   expression_node
//     literal_node
//     identifier_node
//     function_call_node
//       method_call_node
//   special_node (These are only used in the parse trees)
//     project_node
//     source_node
//     options_node
//-----------------------------------------------------------------------------

namespace bm {
	
namespace recoder {

namespace syntax {

namespace nodes {

  //---------------------------------------------------------------------------
  // Class node
  //---------------------------------------------------------------------------
  // This class is the interface class for all node classes.
  //---------------------------------------------------------------------------
  class node
  {

  };

  typedef boost::shared_ptr< node > node_ptr;

} //nodes

} //syntax

} //recoder

} //bm

#endif //BM_RECODER_SYNTAX_NODES_NODE_HPP__

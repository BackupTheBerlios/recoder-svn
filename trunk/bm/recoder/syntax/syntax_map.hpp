#ifndef BM_RECODER_SYNTAX_SYNTAX_MAP_HPP__
#define BM_RECODER_SYNTAX_SYNTAX_MAP_HPP__

/*=============================================================================
    Copyright (c) 2006 Roel Sergeant (rsergeant@gmail.com)
    http://www.rst.be/projects/bm
    http://recoder.berlios.de

    Use, modification and distribution is subject to the Boost Software
    License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/

#include <map>
#include <string>

#include <boost/shared_ptr.hpp>

#include <bm/recoder/syntax/nodes/node.hpp>

namespace bm {

namespace recoder {

namespace syntax {

  class syntax_map : public std::map<
    std::string,
    bm::recoder::syntax::nodes::node_ptr
  >
  {
  public:
    syntax_map (
      std::map object, 
      bm::recoder::syntax::nodes::node_ptr object_node
    );

    ~syntax_map ();

    void add (
      std::string object, 
      bm::recoder::syntax::nodes::node_ptr object_node
    );

    void delete (std::string object);
    
    node_ptr get (std::string object);

  private:
    node_ptr current_node_;
  };

  typedef boost::shared_ptr< syntax_map > syntax_map_ptr;

} //syntax

} //recoder

} //bm

#endif //BM_RECODER_SYNTAX_SYNTAX_MAP_HPP__

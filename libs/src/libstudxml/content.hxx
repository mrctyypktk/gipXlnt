// file      : xml/content -*- C++ -*-
// copyright : Copyright (c) 2013-2014 Code Synthesis Tools CC
// license   : MIT; see accompanying LICENSE file

#ifndef XML_CONTENT
#define XML_CONTENT

#include <xml/details/pre.hxx>

namespace xml
{
  // XML content model. C++11 enum class emulated for C++98.
  //
  struct content
  {
    enum value
    {
               //  element   characters  whitespaces        notes
      empty,   //    no          no        ignored
      simple,  //    no          yes       preserved   content accumulated
      complex, //    yes         no        ignored
      mixed    //    yes         yes       preserved
    };

    content (value v): v_ (v) {};
    operator value () const {return v_;}

  private:
    value v_;
  };
}

#include <xml/details/post.hxx>

#endif // XML_CONTENT

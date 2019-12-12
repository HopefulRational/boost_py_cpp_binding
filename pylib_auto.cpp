// This file has been generated by Py++.

#include "boost/python.hpp"

#include "Bonjour.hpp"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(pylib_auto){
    { //::Bonjour
        typedef bp::class_< Bonjour > Bonjour_exposer_t;
        Bonjour_exposer_t Bonjour_exposer = Bonjour_exposer_t( "Bonjour", bp::init< std::string >(( bp::arg("msg") )) );
        bp::scope Bonjour_scope( Bonjour_exposer );
        bp::implicitly_convertible< std::string, Bonjour >();
        { //::Bonjour::get_msg
        
            typedef ::std::string ( ::Bonjour::*get_msg_function_type)(  ) ;
            
            Bonjour_exposer.def( 
                "get_msg"
                , get_msg_function_type( &::Bonjour::get_msg ) );
        
        }
        { //::Bonjour::greet
        
            typedef void ( ::Bonjour::*greet_function_type)(  ) ;
            
            Bonjour_exposer.def( 
                "greet"
                , greet_function_type( &::Bonjour::greet ) );
        
        }
        { //::Bonjour::set_msg
        
            typedef void ( ::Bonjour::*set_msg_function_type)( ::std::string ) ;
            
            Bonjour_exposer.def( 
                "set_msg"
                , set_msg_function_type( &::Bonjour::set_msg )
                , ( bp::arg("msg") ) );
        
        }
    }
}

# location of the Python header files
 
# PYTHON_VERSION = 2.7
PYTHON_VERSION = 3.5

# BOOST_PYTHON_VERSION = 27
BOOST_PYTHON_VERSION = 35

# PYTHON_INCLUDE = /usr/include/python$(PYTHON_VERSION)
PYTHON_INCLUDE = /usr/include/python$(PYTHON_VERSION)m
 
# location of the Boost Python include files and library
 
BOOST_INC = /usr/include
BOOST_LIB = /usr/lib/x86_64-linux-gnu 
# compile mesh classes
TARGET = pylib
HPP_FILE = Bonjour
 
#$(TARGET).so: $(TARGET).o
#	g++ -shared -Wl,--export-dynamic $(TARGET).o -L$(BOOST_LIB) -lboost_python-py$(BOOST_PYTHON_VERSION) -L/usr/lib/python$(PYTHON_VERSION)/config-x86_64-linux-gnu -lpython$(PYTHON_VERSION) -o $(TARGET).so

$(TARGET).so: $(TARGET).o
	g++ -shared -Wl,--export-dynamic $(TARGET).o -L$(BOOST_LIB) -lboost_python-py$(BOOST_PYTHON_VERSION) -L/usr/lib/python$(PYTHON_VERSION)/config-$(PYTHON_VERSION)m-x86_64-linux-gnu -lpython$(PYTHON_VERSION) -o $(TARGET).so


$(TARGET).o: $(TARGET).cpp $(HPP_FILE).hpp
	g++ -I$(PYTHON_INCLUDE) -I$(BOOST_INC) -fPIC -c $(TARGET).cpp

#ifndef ProcessorLoader_h
#define ProcessorLoader_h 1

//#include "Processor.h"

#include "lcio.h"

#include "LCIOSTLTypes.h"

#include <string>
#include <vector>

namespace marlin{
  
  
  
  /** Processor loader - loads shared libraries with marlin processors. 
   *  The shared libraries are loaded in the constructor with dlopen and 
   *  closed in the destructor, i.e. their lifetime is the same as that 
   *  of the ProcessorLoader instance.
   *
   *  @author F. Gaede, DESY
   *  @version $Id: ProcessorLoader.h,v 1.1 2007-04-23 16:08:02 engels Exp $ 
   */
  class ProcessorLoader {
    
    
    typedef std::vector<void*> LibVec ;
    
  public:
    
    ProcessorLoader( lcio::StringVec::const_iterator  first, lcio::StringVec::const_iterator last ) ;
    
    virtual ~ProcessorLoader() ;
    
    
  protected:
    
    LibVec _libs ;
    
  };

} // end namespace marlin 
#endif
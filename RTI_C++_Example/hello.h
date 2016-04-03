
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from hello.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef hello_1195565009_h
#define hello_1195565009_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *hello_messageTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct hello_messageSeq;

#ifndef NDDS_STANDALONE_TYPE
    class hello_messageTypeSupport;
    class hello_messageDataWriter;
    class hello_messageDataReader;
#endif

#endif

            
    
class hello_message                                        
{
public:            
#ifdef __cplusplus
    typedef struct hello_messageSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef hello_messageTypeSupport TypeSupport;
    typedef hello_messageDataWriter DataWriter;
    typedef hello_messageDataReader DataReader;
#endif

#endif
    
    char*  name; /* maximum length = (255) */

    DDS_Long  count;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* hello_message_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(hello_messageSeq, hello_message);
        
NDDSUSERDllExport
RTIBool hello_message_initialize(
        hello_message* self);
        
NDDSUSERDllExport
RTIBool hello_message_initialize_ex(
        hello_message* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void hello_message_finalize(
        hello_message* self);
                        
NDDSUSERDllExport
void hello_message_finalize_ex(
        hello_message* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool hello_message_copy(
        hello_message* dst,
        const hello_message* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* hello_1195565009_h */

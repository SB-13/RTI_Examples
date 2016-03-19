
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from hello.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
        #ifndef dds_c_log_impl_h              
            #include "dds_c/dds_c_log_impl.h"                                
        #endif        
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
    
    #ifndef cdr_type_h
        #include "cdr/cdr_type.h"
    #endif    

    #ifndef osapi_heap_h
        #include "osapi/osapi_heap.h" 
    #endif
#else
    #include "ndds_standalone_type.h"
#endif



#include "hello.h"

/* ========================================================================= */
const char *hello_messageTYPENAME = "hello_message";

DDS_TypeCode* hello_message_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode hello_message_g_tc_name_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member hello_message_g_tc_members[2]=
    {
        {
            (char *)"name",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_BOOLEAN_TRUE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"count",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode hello_message_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"hello_message", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        hello_message_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for hello_message*/

    if (is_initialized) {
        return &hello_message_g_tc;
    }


    hello_message_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&hello_message_g_tc_name_string;
    hello_message_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &hello_message_g_tc;
}


RTIBool hello_message_initialize(
    hello_message* sample) {
  return hello_message_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool hello_message_initialize_ex(
    hello_message* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (allocateMemory) {
        sample->name = DDS_String_alloc((255));
        if (sample->name == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->name != NULL) { 
            sample->name[0] = '\0';
        }
    }
            

    if (!RTICdrType_initLong(&sample->count)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void hello_message_finalize(
    hello_message* sample)
{
    hello_message_finalize_ex(sample,RTI_TRUE);
}
        
void hello_message_finalize_ex(
    hello_message* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    DDS_String_free(sample->name);                
            


}

RTIBool hello_message_copy(
    hello_message* dst,
    const hello_message* src)
{        

    if (!RTICdrType_copyString(
        dst->name, src->name, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->count, &src->count)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'hello_message' sequence class.
 */
#define T hello_message
#define TSeq hello_messageSeq
#define T_initialize_ex hello_message_initialize_ex
#define T_finalize_ex   hello_message_finalize_ex
#define T_copy       hello_message_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_ex
#undef T_initialize_ex
#undef TSeq
#undef T


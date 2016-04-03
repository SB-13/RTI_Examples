
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from hello.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef helloPlugin_1195565009_h
#define helloPlugin_1195565009_h

#include "hello.h"




struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif


#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif


#ifdef __cplusplus
extern "C" {
#endif

#define hello_message_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * hello_message.
 *
 * By default, this type is struct hello_message
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct hello_message)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct hello_message, the
 * following restriction applies: the key of struct
 * hello_message must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct hello_message.
*/
typedef  class hello_message hello_messageKeyHolder;


#define hello_messagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define hello_messagePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define hello_messagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define hello_messagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define hello_messagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define hello_messagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define hello_messagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define hello_messagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern hello_message*
hello_messagePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern hello_message*
hello_messagePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
hello_messagePluginSupport_copy_data(
    hello_message *out,
    const hello_message *in);

NDDSUSERDllExport extern void 
hello_messagePluginSupport_destroy_data_ex(
    hello_message *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
hello_messagePluginSupport_destroy_data(
    hello_message *sample);

NDDSUSERDllExport extern void 
hello_messagePluginSupport_print_data(
    const hello_message *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern hello_message*
hello_messagePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern hello_message*
hello_messagePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
hello_messagePluginSupport_destroy_key_ex(
    hello_messageKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
hello_messagePluginSupport_destroy_key(
    hello_messageKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
hello_messagePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
hello_messagePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
hello_messagePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
hello_messagePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
hello_messagePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    hello_message *out,
    const hello_message *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
hello_messagePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const hello_message *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
hello_messagePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    hello_message *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
hello_messagePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    hello_message **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
hello_messagePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
hello_messagePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
hello_messagePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
hello_messagePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const hello_message * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
hello_messagePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
hello_messagePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
hello_messagePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const hello_message *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
hello_messagePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    hello_message * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
hello_messagePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    hello_message ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
hello_messagePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    hello_message *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
hello_messagePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    hello_messageKeyHolder *key, 
    const hello_message *instance);

NDDSUSERDllExport extern RTIBool 
hello_messagePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    hello_message *instance, 
    const hello_messageKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
hello_messagePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const hello_message *instance);

NDDSUSERDllExport extern RTIBool 
hello_messagePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
hello_messagePlugin_new(void);

NDDSUSERDllExport extern void
hello_messagePlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* helloPlugin_1195565009_h */

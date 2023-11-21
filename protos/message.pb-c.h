/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: protos/message.proto */

#ifndef PROTOBUF_C_protos_2fmessage_2eproto__INCLUDED
#define PROTOBUF_C_protos_2fmessage_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Chess__LoginMessage Chess__LoginMessage;
typedef struct _Chess__Message Chess__Message;


/* --- enums --- */

typedef enum _Chess__Message__MessageType {
  CHESS__MESSAGE__MESSAGE_TYPE__LOGIN = 0,
  CHESS__MESSAGE__MESSAGE_TYPE__REGISTER = 1,
  CHESS__MESSAGE__MESSAGE_TYPE__LOGOUT = 2,
  CHESS__MESSAGE__MESSAGE_TYPE__MOVE = 3,
  CHESS__MESSAGE__MESSAGE_TYPE__SURRENDER = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CHESS__MESSAGE__MESSAGE_TYPE)
} Chess__Message__MessageType;

/* --- messages --- */

struct  _Chess__LoginMessage
{
  ProtobufCMessage base;
  char *username;
  char *password;
};
#define CHESS__LOGIN_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&chess__login_message__descriptor) \
    , (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string }


typedef enum {
  CHESS__MESSAGE__MESSAGE_CONTENT__NOT_SET = 0,
  CHESS__MESSAGE__MESSAGE_CONTENT_LOGIN_MESSAGE = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CHESS__MESSAGE__MESSAGE_CONTENT)
} Chess__Message__MessageContentCase;

struct  _Chess__Message
{
  ProtobufCMessage base;
  Chess__Message__MessageType type;
  Chess__Message__MessageContentCase message_content_case;
  union {
    Chess__LoginMessage *login_message;
  };
};
#define CHESS__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&chess__message__descriptor) \
    , CHESS__MESSAGE__MESSAGE_TYPE__LOGIN, CHESS__MESSAGE__MESSAGE_CONTENT__NOT_SET, {0} }


/* Chess__LoginMessage methods */
void   chess__login_message__init
                     (Chess__LoginMessage         *message);
size_t chess__login_message__get_packed_size
                     (const Chess__LoginMessage   *message);
size_t chess__login_message__pack
                     (const Chess__LoginMessage   *message,
                      uint8_t             *out);
size_t chess__login_message__pack_to_buffer
                     (const Chess__LoginMessage   *message,
                      ProtobufCBuffer     *buffer);
Chess__LoginMessage *
       chess__login_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   chess__login_message__free_unpacked
                     (Chess__LoginMessage *message,
                      ProtobufCAllocator *allocator);
/* Chess__Message methods */
void   chess__message__init
                     (Chess__Message         *message);
size_t chess__message__get_packed_size
                     (const Chess__Message   *message);
size_t chess__message__pack
                     (const Chess__Message   *message,
                      uint8_t             *out);
size_t chess__message__pack_to_buffer
                     (const Chess__Message   *message,
                      ProtobufCBuffer     *buffer);
Chess__Message *
       chess__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   chess__message__free_unpacked
                     (Chess__Message *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Chess__LoginMessage_Closure)
                 (const Chess__LoginMessage *message,
                  void *closure_data);
typedef void (*Chess__Message_Closure)
                 (const Chess__Message *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor chess__login_message__descriptor;
extern const ProtobufCMessageDescriptor chess__message__descriptor;
extern const ProtobufCEnumDescriptor    chess__message__message_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_protos_2fmessage_2eproto__INCLUDED */

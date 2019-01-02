// Generated by Apple Swift version 4.2.1 effective-4.1.50 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreGraphics;
@import CoreLocation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="LenddoEFLSdk",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@protocol DocumentCaptureControllerDelegate;
@class UIColor;
@class UIViewController;
@class NSString;
@class UIImagePickerController;
@class NSError;

SWIFT_CLASS("_TtC12LenddoEFLSdk25DocumentCaptureController")
@interface DocumentCaptureController : NSObject <CLLocationManagerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (nonatomic, strong) id <DocumentCaptureControllerDelegate> _Nullable delegate;
@property (nonatomic) BOOL isDocumentFileUploaded;
@property (nonatomic, strong) UIColor * _Nonnull themeColor;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nullable instancetype)initWithPresenter:(UIViewController * _Nonnull)presenter error:(NSError * _Nullable * _Nullable)error;
- (BOOL)showTakeDocumentScreen SWIFT_WARN_UNUSED_RESULT;
- (void)setDocumentTypeId:(NSString * _Nonnull)typeId;
- (NSString * _Nonnull)getDocumentTypeId SWIFT_WARN_UNUSED_RESULT;
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> * _Nonnull)info;
- (void)imagePickerControllerDidCancel:(UIImagePickerController * _Nonnull)picker;
- (void)onDocumentSubmitError:(NSError * _Nonnull)error;
- (void)onDocumentSubmitSuccess:(float)progress;
- (void)deleteDocumentFile;
@end


SWIFT_PROTOCOL("_TtP12LenddoEFLSdk33DocumentCaptureControllerDelegate_")
@protocol DocumentCaptureControllerDelegate
- (void)onDocumentCancel;
- (void)onDocumentSaveSuccess;
- (void)onDocumentSubmitSuccess;
- (void)onDocumentStepComplete;
@end

@protocol LivenessCameraControllerDelegate;

SWIFT_CLASS("_TtC12LenddoEFLSdk24LivenessCameraController")
@interface LivenessCameraController : NSObject <CLLocationManagerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (nonatomic, strong) id <LivenessCameraControllerDelegate> _Nullable delegate;
@property (nonatomic) BOOL isImageFileUploaded;
@property (nonatomic) BOOL isVideoFileUploaded;
@property (nonatomic, strong) UIColor * _Nonnull themeColor;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nullable instancetype)initWithPresenter:(UIViewController * _Nonnull)presenter error:(NSError * _Nullable * _Nullable)error;
- (void)setActions:(NSArray<NSString *> * _Nonnull)actions;
- (void)showRecordVideoScreen;
- (void)showRecordingCompleteDialog;
- (void)previewVideoScreen;
- (void)setLivenessDocumentTypeId:(NSString * _Nonnull)typeId;
- (NSString * _Nonnull)getLivenessDocumentTypeId SWIFT_WARN_UNUSED_RESULT;
- (void)setSelfieDocumentTypeId:(NSString * _Nonnull)typeId;
- (NSString * _Nonnull)getSelfieDocumentTypeId SWIFT_WARN_UNUSED_RESULT;
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> * _Nonnull)info;
- (void)imagePickerControllerDidCancel:(UIImagePickerController * _Nonnull)picker;
- (void)onLivenessSubmitError:(NSError * _Nonnull)error;
- (void)onLivenessSubmitSuccess:(float)progress;
- (void)deleteLivenessFiles;
@end


SWIFT_PROTOCOL("_TtP12LenddoEFLSdk32LivenessCameraControllerDelegate_")
@protocol LivenessCameraControllerDelegate
- (void)onLivenessCancel;
- (void)onLivenessRetake;
- (void)onLivenessSubmit;
- (void)onLivenessStepComplete;
@end


SWIFT_PROTOCOL("_TtP12LenddoEFLSdk31SignatureViewControllerDelegate_")
@protocol SignatureViewControllerDelegate
- (void)onSignatureSaveSuccess;
- (void)onSignatureSubmitSuccess;
@end

@protocol SignatureControllerDelegate;

SWIFT_CLASS("_TtC12LenddoEFLSdk19SignatureController")
@interface SignatureController : NSObject <SignatureViewControllerDelegate>
@property (nonatomic, strong) id <SignatureControllerDelegate> _Nullable delegate;
@property (nonatomic) BOOL isSignatureUploaded;
@property (nonatomic, strong) UIColor * _Nonnull themeColor;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nullable instancetype)initWithPresenter:(UIViewController * _Nonnull)presenter error:(NSError * _Nullable * _Nullable)error;
- (void)showSignatureView;
- (NSString * _Nonnull)getSignatureDocumentTypeId SWIFT_WARN_UNUSED_RESULT;
- (void)setSignatureDocumentTypeId:(NSString * _Nonnull)typeId;
- (void)onSignatureSaveSuccess;
- (void)onSignatureSubmitSuccess;
- (void)onSignatureSubmitError:(NSError * _Nonnull)error;
- (void)onSignatureSubmitSuccess:(float)progress;
- (void)deleteSignatureFile;
@end


SWIFT_PROTOCOL("_TtP12LenddoEFLSdk27SignatureControllerDelegate_")
@protocol SignatureControllerDelegate
- (void)onSignatureSaveSuccess;
- (void)onSignatureStepComplete;
@end










@class NSCoder;

SWIFT_CLASS("_TtC12LenddoEFLSdk20VerticalProgressView")
@interface VerticalProgressView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@end

@class UITouch;
@class UIEvent;

/// <h1>Class: YPDrawSignatureView</h1>
/// Accepts touches and draws an image to an UIView
/// <h2>Description</h2>
/// This is an UIView based class for capturing a signature drawn by a finger in iOS.
/// <h2>Usage</h2>
/// Add the YPSignatureDelegate to the view to exploit the optional delegate methods
/// <ul>
///   <li>
///     startedDrawing(_ view: YPDrawSignatureView)
///   </li>
///   <li>
///     finishedDrawing(_ view: YPDrawSignatureView)
///   </li>
///   <li>
///     Add an @IBOutlet, and set its delegate to self
///   </li>
///   <li>
///     Clear the signature field by calling clear() to it
///   </li>
///   <li>
///     Retrieve the signature from the field by either calling
///   </li>
///   <li>
///     getSignature() or
///   </li>
///   <li>
///     getCroppedSignature()
///   </li>
/// </ul>
SWIFT_CLASS("_TtC12LenddoEFLSdk19YPDrawSignatureView")
@interface YPDrawSignatureView : UIView
@property (nonatomic) CGFloat strokeWidth;
@property (nonatomic, strong) UIColor * _Nonnull strokeColor;
@property (nonatomic, strong) UIColor * _Nonnull signatureBackgroundColor SWIFT_DEPRECATED_MSG("", "backgroundColor");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)drawRect:(CGRect)rect;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end


/// <h2>YPDrawSignatureViewDelegate Protocol</h2>
/// YPDrawSignatureViewDelegate:
/// <ul>
///   <li>
///     optional didStart(_ view : YPDrawSignatureView)
///   </li>
///   <li>
///     optional didFinish(_ view : YPDrawSignatureView)
///   </li>
/// </ul>
SWIFT_PROTOCOL("_TtP12LenddoEFLSdk19YPSignatureDelegate_")
@protocol YPSignatureDelegate
- (void)didStart:(YPDrawSignatureView * _Nonnull)view;
- (void)didFinish:(YPDrawSignatureView * _Nonnull)view;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

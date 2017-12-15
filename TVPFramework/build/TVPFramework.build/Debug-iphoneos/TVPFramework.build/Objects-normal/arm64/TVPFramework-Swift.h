// Generated by Apple Swift version 4.0 (swiftlang-900.0.65 clang-900.0.37)
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

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
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
# elif !defined(__cplusplus) || __cplusplus < 201103L
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
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
@import UIKit;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("TVPFramework")
@class UIView;

/// Can be <code>UIView</code> or <code>UIBarButtonItem</code>.
SWIFT_PROTOCOL("_TtP12TVPFramework10AnchorView_")
@protocol AnchorView
@property (nonatomic, readonly, strong) UIView * _Nonnull plainView;
@end

@class NSCoder;

SWIFT_CLASS("_TtC12TVPFramework12CarouselView")
@interface CarouselView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



@class UICollectionView;
@class UICollectionViewLayout;

@interface CarouselView (SWIFT_EXTENSION(TVPFramework)) <UICollectionViewDelegateFlowLayout>
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end



@class UICollectionViewCell;

@interface CarouselView (SWIFT_EXTENSION(TVPFramework)) <UICollectionViewDataSource>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplayCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class UIScrollView;

@interface CarouselView (SWIFT_EXTENSION(TVPFramework)) <UICollectionViewDelegate>
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)scrollViewWillBeginDragging:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewWillEndDragging:(UIScrollView * _Nonnull)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint * _Nonnull)targetContentOffset;
@end

@class UIColor;
@class UIFont;

/// A Material Design drop down in replacement for <code>UIPickerView</code>.
SWIFT_CLASS("_TtC12TVPFramework8DropDown")
@interface DropDown : UIView
@property (nonatomic) CGFloat cellHeight;
@property (nonatomic, strong) UIColor * _Nullable backgroundColor;
/// The background color of the selected cell in the drop down.
/// Changing the background color automatically reloads the drop down.
@property (nonatomic, strong) UIColor * _Nonnull selectionBackgroundColor;
@property (nonatomic, strong) UIColor * _Nonnull selectionTextColor;
/// The separator color between cells.
/// Changing the separator color automatically reloads the drop down.
@property (nonatomic, strong) UIColor * _Nonnull separatorColor;
/// The corner radius of DropDown.
/// Changing the corner radius automatically reloads the drop down.
@property (nonatomic) CGFloat cornerRadius;
/// The color of the shadow.
/// Changing the shadow color automatically reloads the drop down.
@property (nonatomic, strong) UIColor * _Nonnull shadowColor;
/// The offset of the shadow.
/// Changing the shadow color automatically reloads the drop down.
@property (nonatomic) CGSize shadowOffset;
/// The opacity of the shadow.
/// Changing the shadow opacity automatically reloads the drop down.
@property (nonatomic) float shadowOpacity;
/// The radius of the shadow.
/// Changing the shadow radius automatically reloads the drop down.
@property (nonatomic) CGFloat shadowRadius;
/// The duration of the show/hide animation.
@property (nonatomic) double animationduration;
/// The color of the text for each cells of the drop down.
/// Changing the text color automatically reloads the drop down.
@property (nonatomic, strong) UIColor * _Nonnull textColor;
/// The font of the text for each cells of the drop down.
/// Changing the text font automatically reloads the drop down.
@property (nonatomic, strong) UIFont * _Nonnull textFont;
/// Creates a new instance of a drop down.
/// Don’t forget to setup the <code>dataSource</code>,
/// the <code>anchorView</code> and the <code>selectionAction</code>
/// at least before calling <code>show()</code>.
- (nonnull instancetype)init;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end





@class UIEvent;

@interface DropDown (SWIFT_EXTENSION(TVPFramework))
- (UIView * _Nullable)hitTest:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
@end



@class UITableView;
@class UITableViewCell;

@interface DropDown (SWIFT_EXTENSION(TVPFramework)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class NSDictionary;

@interface DropDown (SWIFT_EXTENSION(TVPFramework))
/// An Objective-C alias for the show() method which converts the returned tuple into an NSDictionary.
///
/// returns:
/// An NSDictionary with a value for the “canBeDisplayed” Bool, and possibly for the “offScreenHeight” Optional(CGFloat).
- (NSDictionary * _Nonnull)show SWIFT_WARN_UNUSED_RESULT;
@end


@interface DropDown (SWIFT_EXTENSION(TVPFramework))
- (void)updateConstraints;
- (void)layoutSubviews;
@end



@class UILabel;

SWIFT_CLASS("_TtC12TVPFramework12DropDownCell")
@interface DropDownCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified optionLabel;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface DropDownCell (SWIFT_EXTENSION(TVPFramework))
- (void)awakeFromNib;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
@end




SWIFT_CLASS("_TtC12TVPFramework11SidebarView")
@interface SidebarView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end






@interface SidebarView (SWIFT_EXTENSION(TVPFramework)) <UICollectionViewDelegate>
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end




@interface SidebarView (SWIFT_EXTENSION(TVPFramework)) <UICollectionViewDelegateFlowLayout>
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout referenceSizeForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
@end

@class UICollectionReusableView;

@interface SidebarView (SWIFT_EXTENSION(TVPFramework)) <UICollectionViewDataSource>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplayCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UICollectionReusableView * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView viewForSupplementaryElementOfKind:(NSString * _Nonnull)kind atIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP12TVPFramework16TVPlayerDelegate_")
@protocol TVPlayerDelegate
@optional
- (void)tvPlayerReadyWithFlag:(BOOL)flag;
- (void)tvPlayerErrorWithError:(NSError * _Nonnull)error;
- (void)tvPlayerMediaReadyWithFlag:(BOOL)flag;
- (void)tvPlayerMediaErrorWithError:(NSError * _Nonnull)error;
- (void)tvPlayerErrorForbiddenWithError:(NSError * _Nonnull)error;
- (void)tvPlayerErrorHTML5ForbiddenWithError:(NSError * _Nonnull)error;
- (void)tvPlayerMediaCompleteWithFlag:(BOOL)flag;
- (void)tvPlayerCuedWithFlag:(BOOL)flag;
- (void)tvPlayerMediaVideoendedWithFlag:(BOOL)flag;
- (void)tvPlayerMediaVideoplayingWithFlag:(BOOL)flag;
- (void)tvPlayerMediaVideopausedWithFlag:(BOOL)flag;
- (void)tvPlayerMediaVideobufferingWithFlag:(BOOL)flag;
- (void)tvPlayerPlaybackQualityChangeWithFlag:(NSString * _Nonnull)flag;
- (void)tvPlayerMediaProviderChangeWithFlag:(NSString * _Nonnull)flag;
- (void)tvPlayerSeekWithFlag:(NSString * _Nonnull)flag;
- (void)tvPlayerVideoLoadWithFlag:(BOOL)flag;
- (void)tvPlayerVideoCuedWithFlag:(BOOL)flag;
@end


@interface SidebarView (SWIFT_EXTENSION(TVPFramework)) <TVPlayerDelegate>
- (void)tvPlayerReadyWithFlag:(BOOL)flag;
- (void)tvPlayerErrorWithError:(NSError * _Nonnull)error;
- (void)tvPlayerMediaReadyWithFlag:(BOOL)flag;
- (void)tvPlayerMediaErrorWithError:(NSError * _Nonnull)error;
- (void)tvPlayerErrorForbiddenWithError:(NSError * _Nonnull)error;
- (void)tvPlayerErrorHTML5ForbiddenWithError:(NSError * _Nonnull)error;
- (void)tvPlayerMediaCompleteWithFlag:(BOOL)flag;
- (void)tvPlayerCuedWithFlag:(BOOL)flag;
- (void)tvPlayerMediaVideoendedWithFlag:(BOOL)flag;
- (void)tvPlayerMediaVideoplayingWithFlag:(BOOL)flag;
- (void)tvPlayerMediaVideopausedWithFlag:(BOOL)flag;
- (void)tvPlayerMediaVideobufferingWithFlag:(BOOL)flag;
- (void)tvPlayerPlaybackQualityChangeWithFlag:(NSString * _Nonnull)flag;
- (void)tvPlayerMediaProviderChangeWithFlag:(NSString * _Nonnull)flag;
- (void)tvPlayerSeekWithFlag:(NSString * _Nonnull)flag;
- (void)tvPlayerVideoLoadWithFlag:(BOOL)flag;
- (void)tvPlayerVideoCuedWithFlag:(BOOL)flag;
@end


SWIFT_CLASS("_TtC12TVPFramework11TVPApiClass")
@interface TVPApiClass : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12TVPFramework16TVPagePlayerView")
@interface TVPagePlayerView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) Class _Nonnull layerClass;)
+ (Class _Nonnull)layerClass SWIFT_WARN_UNUSED_RESULT;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (void)play;
- (void)pause;
- (void)removeFromSuperview;
@end



SWIFT_CLASS("_TtC12TVPFramework11TvpApiClass")
@interface TvpApiClass : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIBarButtonItem (SWIFT_EXTENSION(TVPFramework)) <AnchorView>
@property (nonatomic, readonly, strong) UIView * _Nonnull plainView;
@end








@interface UIView (SWIFT_EXTENSION(TVPFramework)) <AnchorView>
@property (nonatomic, readonly, strong) UIView * _Nonnull plainView;
@end



SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop

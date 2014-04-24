// BritishInvasion.h
// 
// Copyright (c) 2014 Mattt Thompson
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

@import Foundation;
@import UIKit;

// 🇬🇧 English (Traditional)
// 🇺🇸 English (Simplified)

#ifndef THE_BRITISH_HAVE_INVADED
#define THE_BRITISH_HAVE_INVADED

#pragma mark - 🇺🇸 Center / 🇬🇧 Centre

#define CFNotificationCentreRef CFNotificationCenterRef
#define NSLayoutAttributeCentreX NSLayoutAttributeCenterX
#define NSLayoutAttributeCentreY NSLayoutAttributeCenterY
#define NSLayoutFormatAlignAllCentreX NSLayoutFormatAlignAllCenterX
#define NSLayoutFormatAlignAllCentreY NSLayoutFormatAlignAllCenterY
#define NSTextAlignmentCentre NSTextAlignmentCenter
#define UIBaselineAdjustmentAlignCentres UIBaselineAdjustmentAlignCenters
#define UICollectionViewScrollPositionCentredHorizontally UICollectionViewScrollPositionCenteredHorizontally
#define UICollectionViewScrollPositionCentredVertically UICollectionViewScrollPositionCenteredVertically
#define UIControlContentHorizontalAlignmentCentre UIControlContentHorizontalAlignmentCenter
#define UIControlContentVerticalAlignmentCentre UIControlContentVerticalAlignmentCenter
#define UIKeyboardCentreBeginUserInfoKey UIKeyboardCenterBeginUserInfoKey
#define UIKeyboardCentreEndUserInfoKey UIKeyboardCenterEndUserInfoKey
#define UISegmentedControlSegmentCentre UISegmentedControlSegmentCenter
#define UITabBarItemPositioningCentred UITabBarItemPositioningCentered
#define UITextAlignmentCentre UITextAlignmentCenter
#define UIViewContentModeCentre UIViewContentModeCenter

@compatibility_alias NSNotificationCentre NSNotificationCenter;

@interface NSNotificationCentre (British_Centre)
+ (instancetype)defaultCentre;
@end

@interface NSNotificationQueue (British_Centre)
- (id)initWithNotificationCentre:(NSNotificationCentre *)notificationCentre;
@end

@interface UIBezierPath (British_Centre)
+ (UIBezierPath *)bezierPathWithArcCentre:(CGPoint)centre
                                   radius:(CGFloat)radius
                               startAngle:(CGFloat)startAngle
                                 endAngle:(CGFloat)endAngle
                                clockwise:(BOOL)clockwise;

- (void)addArcWithCentere:(CGPoint)centre
                   radius:(CGFloat)radius
               startAngle:(CGFloat)startAngle
                 endAngle:(CGFloat)endAngle
                clockwise:(BOOL)clockwise;
@end

@interface UIView (British_Centre)
@property (nonatomic) CGPoint centre;
@end

#pragma mark - 🇺🇸 Color / 🇬🇧 Colour

#define CGBitmapContextGetColourSpace CGBitmapContextGetColorSpace
#define CGColourCreateCopy CGColorCreateCopy
#define CGColourCreateCopyWithAlpha CGColorCreateCopyWithAlpha
#define CGColourCreateWithPattern CGColorCreateWithPattern
#define CGColourEqualToColour CGColorEqualToColor
#define CGColourGetAlpha CGColorGetAlpha
#define CGColourGetColourSpace CGColorGetColorSpace
#define CGColourGetComponents CGColorGetComponents
#define CGColourGetNumberOfComponents CGColorGetNumberOfComponents
#define CGColourGetPattern CGColorGetPattern
#define CGColourGetTypeID CGColorGetTypeID
#define CGColourRef CGColorRef
#define CGColourRenderingIntent CGColorRenderingIntent
#define CGColourSpaceCopyICCProfile CGColorSpaceCopyICCProfile
#define CGColourSpaceCreateCalibratedGray CGColorSpaceCreateCalibratedGray
#define CGColourSpaceCreateCalibratedRGB CGColorSpaceCreateCalibratedRGB
#define CGColourSpaceCreateDeviceCMYK CGColorSpaceCreateDeviceCMYK
#define CGColourSpaceCreateDeviceGray CGColorSpaceCreateDeviceGray
#define CGColourSpaceCreateDeviceRGB CGColorSpaceCreateDeviceRGB
#define CGColourSpaceCreateICCBased CGColorSpaceCreateICCBased
#define CGColourSpaceCreateIndexed CGColorSpaceCreateIndexed
#define CGColourSpaceCreateLab CGColorSpaceCreateLab
#define CGColourSpaceCreatePattern CGColorSpaceCreatePattern
#define CGColourSpaceCreateWithICCProfile CGColorSpaceCreateWithICCProfile
#define CGColourSpaceCreateWithName CGColorSpaceCreateWithName
#define CGColourSpaceGetBaseColourSpace CGColorSpaceGetBaseColorSpace
#define CGColourSpaceGetColourTable CGColorSpaceGetColorTable
#define CGColourSpaceGetColourTableCount CGColorSpaceGetColorTableCount
#define CGColourSpaceGetModel CGColorSpaceGetModel
#define CGColourSpaceGetNumberOfComponents CGColorSpaceGetNumberOfComponents
#define CGColourSpaceGetTypeID CGColorSpaceGetTypeID
#define CGColourSpaceModel CGColorSpaceModel
#define CGColourSpaceRef CGColourSpaceRef
#define CGColourSpaceRelease CGColorSpaceRelease
#define CGColourSpaceRetain CGColorSpaceRetain
#define CGContextSetCMYKFillColour CGContextSetCMYKFillColor
#define CGContextSetCMYKStrokeColour CGContextSetCMYKStrokeColor
#define CGContextSetFillColour CGContextSetFillColor
#define CGContextSetFillColourSpace CGContextSetFillColorSpace
#define CGContextSetFillColourWithColour CGContextSetFillColorWithColor
#define CGContextSetGrayFillColour CGContextSetGrayFillColor
#define CGContextSetGrayStrokeColour CGContextSetGrayStrokeColor
#define CGContextSetRGBFillColour CGContextSetRGBFillColor
#define CGContextSetRGBStrokeColour CGContextSetRGBStrokeColor
#define CGContextSetShadowWithColour CGContextSetShadowWithColor
#define CGContextSetStrokeColour CGContextSetStrokeColor
#define CGContextSetStrokeColourSpace CGContextSetStrokeColorSpace
#define CGContextSetStrokeColourWithColour CGContextSetStrokeColorWithColor
#define CGGradientCreateWithColourComponents CGGradientCreateWithColorComponents
#define CGGradientCreateWithColours CGGradientCreateWithColors
#define CGImageCreateCopyWithColourSpace CGImageCreateCopyWithColorSpace
#define CGImageCreateWithMaskingColours CGImageCreateWithMaskingColors
#define CGImageGetColourSpace CGImageGetColorSpace
#define kCGBlendModeColour kCGBlendModeColor
#define kCGBlendModeColourBurn kCGBlendModeColorBurn
#define kCGBlendModeColourDodge kCGBlendModeColorDodge
#define kCGColourSpaceModelCMYK kCGColorSpaceModelCMYK
#define kCGColourSpaceModelDeviceN kCGColorSpaceModelDeviceN
#define kCGColourSpaceModelIndexed kCGColorSpaceModelIndexed
#define kCGColourSpaceModelLab kCGColorSpaceModelLab
#define kCGColourSpaceModelMonochrome kCGColorSpaceModelMonochrome
#define kCGColourSpaceModelPattern kCGColorSpaceModelPattern
#define kCGColourSpaceModelRGB kCGColorSpaceModelRGB
#define kCGColourSpaceModelUnknown kCGColorSpaceModelUnknown
#define kCGRenderingIntentAbsoluteColourimetric kCGRenderingIntentAbsoluteColorimetric
#define kCGRenderingIntentRelativeColourimetric kCGRenderingIntentRelativeColorimetric
#define NSBackgroundColourAttributeName NSBackgroundColorAttributeName
#define NSBackgroundColourDocumentAttribute NSBackgroundColorDocumentAttribute
#define NSForegroundColourAttributeName NSForegroundColorAttributeName
#define NSStrikethroughColourAttributeName NSStrikethroughColorAttributeName
#define NSStrokeColourAttributeName NSStrokeColorAttributeName
#define NSUnderlineColourAttributeName NSUnderlineColorAttributeName
#define NSURLLabelColourKey NSURLLabelColorKey

@compatibility_alias CIColour CIColor;
@compatibility_alias UIColour UIColor;

@interface UIColour (British_Colour)
@property (nonatomic, readonly) CGColourRef CGColour;
@property (nonatomic, readonly) CIColour *CIColour;

+ (UIColour *)colourWithWhite:(CGFloat)white
                        alpha:(CGFloat)alpha;

+ (UIColour *)colourWithHue:(CGFloat)hue
                 saturation:(CGFloat)saturation
                 brightness:(CGFloat)brightness
                      alpha:(CGFloat)alpha;

+ (UIColour *)colourWithRed:(CGFloat)red
                      green:(CGFloat)green
                       blue:(CGFloat)blue
                      alpha:(CGFloat)alpha;

+ (UIColour *)colourWithCGColour:(CGColourRef)cgColour;

+ (UIColour *)colourWithPatternImage:(UIImage *)image;

+ (UIColour *)colourWithCIColour:(CIColour *)ciColour;

- (UIColour *)colourWithAlphaComponent:(CGFloat)alpha;

- (UIColour *)initWithCGColour:(CGColourRef)cgColour;
- (UIColour *)initWithCIColour:(CIColour *)ciColour;

+ (UIColour *)blackColour;
+ (UIColour *)whiteColour;
+ (UIColour *)redColour;
+ (UIColour *)greenColour;
+ (UIColour *)blueColour;
+ (UIColour *)cyanColour;
+ (UIColour *)yellowColour;
+ (UIColour *)magentaColour;
+ (UIColour *)orangeColour;
+ (UIColour *)purpleColour;
+ (UIColour *)brownColour;
+ (UIColour *)clearColour;

+ (UIColour *)lightTextColour;
+ (UIColour *)darkTextColour;
+ (UIColour *)groupTableViewBackgroundColour;
@end

@interface UIActivityIndicatorView (British_Colour)
@property (readwrite, nonatomic, retain) UIColour *colour;
@end

@interface UIButton (British_Colour)
@property(nonatomic, readonly, retain) UIColour *currentTitleColour;
@property(nonatomic, readonly, retain) UIColour *currentTitleShadowColour;
@end

@interface UILabel (British_Colour)
@property (nonatomic, strong) UIColour *textColour;
@property (nonatomic, strong) UIColour *highlightedTextColour;
@property (nonatomic, strong) UIColour *shadowColour;
@end

@interface UINavigationBar (British_Colour)
@property (nonatomic, strong) UIColour *barTintColour;
@end

@interface UIPageControl (British_Colour)
@property (nonatomic, copy) UIColour *pageIndicatorTintColour;
@property (nonatomic, copy) UIColour *currentPageIndicatorTintColour;
@end

@interface UIPasteboard (British_Colour)
@property (nonatomic, copy) UIColour *colour;
@property (nonatomic, copy) NSArray *colours;
@end

@interface UISearchBar (British_Colour)
@property (nonatomic, strong) UIColour *barTintColour;
@end

@interface UISimpleTextPrintFormatter (British_Colour)
@property (nonatomic, strong) UIColour *colour;
@end

@interface UISlider (British_Colour)
@property (nonatomic, strong) UIColour *minimumTrackTintColour;
@property (nonatomic, strong) UIColour *maximumTrackTintColour;
@end

@interface UISwitch (British_Colour)
@property (nonatomic, strong) UIColour *tintColour;
@property (nonatomic, strong) UIColour *onTintColour;
@property (nonatomic, strong) UIColour *thumbTintColour;
@end

@interface UITabBar (British_Colour)
@property (nonatomic, strong) UIColour *barTintColour;
@end

#pragma mark - 🇺🇸 Gray / 🇬🇧 Grey

#define CGColorSpaceCreateCalibratedGrey CGColorSpaceCreateCalibratedGray
#define CGColorSpaceCreateDeviceGrey CGColorSpaceCreateDeviceGray
#define CGContextSetGreyFillColor CGContextSetGrayFillColor
#define CGContextSetGreyStrokeColor CGContextSetGrayStrokeColor
#define UIActivityIndicatorViewStyleGrey UIActivityIndicatorViewStyleGray
#define UIPrintInfoOutputGreyscale UIPrintInfoOutputGrayscale
#define UIPrintInfoOutputPhotoGreyscale UIPrintInfoOutputPhotoGrayscale
#define UITableViewCellSelectionStyleGrey UITableViewCellSelectionStyleGray

@interface UIColour (British_Grey)
+ (UIColour *)greyColour;
+ (UIColour *)lightGreyColour;
+ (UIColour *)darkGreyColour;
@end

#pragma mark - 🇺🇸 While / 🇬🇧 Whilst

#define whilst while

#endif /* THE_BRITISH_HAVE_INVADED */

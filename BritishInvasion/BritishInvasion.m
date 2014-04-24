// BritishInvasion.m
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

#import "BritishInvasion.h"

#pragma mark - 🇺🇸 Center / 🇬🇧 Centre

@implementation NSNotificationCentre (British_Centre)

+ (instancetype)defaultCentre {
    return [self defaultCenter];
}

@end

@implementation NSNotificationQueue (British_Centre)

- (id)initWithNotificationCentre:(NSNotificationCentre *)notificationCentre {
    return [self initWithNotificationCenter:notificationCentre];
}

@end

@implementation UIBezierPath (British_Centre)

+ (UIBezierPath *)bezierPathWithArcCentre:(CGPoint)centre
                                   radius:(CGFloat)radius
                               startAngle:(CGFloat)startAngle
                                 endAngle:(CGFloat)endAngle
                                clockwise:(BOOL)clockwise
{
    return [self bezierPathWithArcCenter:centre radius:radius startAngle:startAngle endAngle:endAngle clockwise:clockwise];
}

- (void)addArcWithCentre:(CGPoint)centre
                  radius:(CGFloat)radius
              startAngle:(CGFloat)startAngle
                endAngle:(CGFloat)endAngle
               clockwise:(BOOL)clockwise
{
    [self addArcWithCenter:centre radius:radius startAngle:startAngle endAngle:endAngle clockwise:clockwise];
}

@end

@implementation UIView (British_Centre)

- (CGPoint)centre {
    return [self center];
}

- (void)setCentre:(CGPoint)centre {
    [self setCenter:centre];
}

@end

#pragma mark - 🇺🇸 Color / 🇬🇧 Colour

@implementation UIColour (British_Colour)

- (CGColourRef)CGColour {
    return [self CGColor];
}

- (CIColor *)CIColour {
    return [self CIColor];
}

+ (UIColour *)colourWithWhite:(CGFloat)white
                        alpha:(CGFloat)alpha
{
    return [self colorWithWhite:white alpha:alpha];
}

+ (UIColour *)colourWithHue:(CGFloat)hue
                 saturation:(CGFloat)saturation
                 brightness:(CGFloat)brightness
                      alpha:(CGFloat)alpha
{
    return [self colorWithHue:hue saturation:saturation brightness:brightness alpha:alpha];
}

+ (UIColour *)colourWithRed:(CGFloat)red
                      green:(CGFloat)green
                       blue:(CGFloat)blue
                      alpha:(CGFloat)alpha
{
    return [self colorWithRed:red green:green blue:blue alpha:alpha];
}

+ (UIColour *)colourWithCGColour:(CGColourRef)cgColour {
    return [self colorWithCGColor:cgColour];
}

+ (UIColour *)colourWithPatternImage:(UIImage *)image {
    return [self colorWithPatternImage:image];
}

+ (UIColour *)colourWithCIColour:(CIColour *)ciColour {
    return [self colorWithCIColor:ciColour];
}

- (UIColour *)colourWithAlphaComponent:(CGFloat)alpha {
    return [self colorWithAlphaComponent:alpha];
}

- (UIColour *)initWithCGColour:(CGColourRef)cgColour {
    return [self initWithCGColor:cgColour];
}

- (UIColour *)initWithCIColour:(CIColour *)ciColour {
    return [self initWithCIColor:ciColour];
}

+ (UIColour *)blackColour {
    return [self blackColor];
}

+ (UIColour *)whiteColour {
    return [self whiteColor];
}

+ (UIColour *)redColour {
    return [self redColor];
}

+ (UIColour *)greenColour {
    return [self greenColor];
}

+ (UIColour *)blueColour {
    return [self blueColor];
}

+ (UIColour *)cyanColour {
    return [self cyanColor];
}

+ (UIColour *)yellowColour {
    return [self yellowColor];
}

+ (UIColour *)magentaColour {
    return [self magentaColor];
}

+ (UIColour *)orangeColour {
    return [self orangeColor];
}

+ (UIColour *)purpleColour {
    return [self purpleColor];
}

+ (UIColour *)brownColour {
    return [self brownColor];
}

+ (UIColour *)clearColour {
    return [self clearColor];
}

+ (UIColour *)lightTextColour {
    return [self lightTextColor];
}

+ (UIColour *)darkTextColour {
    return [self darkTextColor];
}

+ (UIColour *)groupTableViewBackgroundColour {
    return [self groupTableViewBackgroundColor];
}

@end

@implementation UIActivityIndicatorView (British_Colour)

- (UIColour *)colour {
    return [self color];
}

- (void)setColour:(UIColour *)colour {
    [self setColor:colour];
}

@end

@implementation UIButton (British_Colour)

- (UIColour *)currentTitleColour {
    return [self currentTitleColor];
}

- (UIColour *)currentTitleShadowColour {
    return [self currentTitleShadowColor];
}

@end

@implementation UILabel (British_Colour)

- (UIColour *)textColour {
    return [self textColor];
}

- (void)setTextColour:(UIColour *)colour {
    [self setTextColor:colour];
}

- (UIColour *)highlightedTextColour {
    return [self highlightedTextColor];
}

- (void)setHighlightedTextColour:(UIColour *)colour {
    [self setHighlightedTextColor:colour];
}

- (UIColour *)shadowColour {
    return [self shadowColor];
}

- (void)setShadowColour:(UIColour *)colour {
    [self setShadowColor:colour];
}

@end

@implementation UINavigationBar (British_Colour)

- (UIColour *)barTintColour {
    return [self barTintColor];
}

- (void)setBarTintColour:(UIColour *)colour {
    [self setBarTintColor:colour];
}

@end

@implementation UIPageControl (British_Colour)

- (UIColour *)pageIndicatorTintColour {
    return [self pageIndicatorTintColor];
}

- (void)setPageIndicatorTintColour:(UIColour *)colour {
    [self setPageIndicatorTintColor:colour];
}

- (UIColour *)currentPageIndicatorTintColour {
    return [self currentPageIndicatorTintColor];
}

- (void)setCurrentPageIndicatorTintColour:(UIColour *)colour {
    [self setCurrentPageIndicatorTintColor:colour];
}

@end

@implementation UIPasteboard (British_Colour)

- (UIColour *)colour {
    return [self color];
}

- (void)setColour:(UIColour *)colour {
    [self setColor:colour];
}

- (NSArray *)colours {
    return [self colors];
}

- (void)setColours:(NSArray *)colours {
    [self setColors:colours];
}

@end

@implementation UISearchBar (British_Colour)

- (UIColour *)barTintColour {
    return [self barTintColor];
}

- (void)setBarTintColour:(UIColour *)colour {
    [self setBarTintColor:colour];
}

@end

@implementation UISimpleTextPrintFormatter (British_Colour)

- (UIColour *)colour {
    return [self color];
}

- (void)setColour:(UIColour *)colour {
    [self setColor:colour];
}

@end

@implementation UISlider (British_Colour)

- (UIColour *)minimumTrackTintColour {
    return [self minimumTrackTintColor];
}

- (void)setMinimumTrackTintColour:(UIColour *)colour {
    [self setMinimumTrackTintColor:colour];
}

- (UIColour *)maximumTrackTintColour {
    return [self maximumTrackTintColour];
}

- (void)setMaximumTrackTintColour:(UIColour *)colour {
    [self setMaximumTrackTintColor:colour];
}

@end

@implementation UISwitch (British_Colour)

- (UIColour *)tintColour {
    return [self tintColour];
}

- (void)setTintColour:(UIColour *)colour {
    [self setTintColor:colour];
}

- (UIColour *)onTintColour {
    return [self onTintColor];
}

- (void)setOnTintColour:(UIColour *)colour {
    [self setOnTintColor:colour];
}

- (UIColour *)thumbTintColour {
    return [self thumbTintColor];
}

- (void)setThumbTintColour:(UIColour *)colour {
    [self setThumbTintColor:colour];
}

@end

@implementation UITabBar (British_Colour)

- (UIColour *)barTintColour {
    return [self barTintColor];
}

- (void)setBarTintColour:(UIColour *)colour {
    [self setBarTintColor:colour];
}

@end

#pragma mark - 🇺🇸 Gray / 🇬🇧 Grey

@implementation UIColour (British_Grey)

- (CGColourRef)CGColour {
    return [self CGColor];
}

+ (UIColour *)greyColour {
    return [self grayColor];
}

+ (UIColour *)lightGreyColour {
    return [self lightGrayColor];
}

+ (UIColour *)darkGreyColour {
    return [self darkGrayColor];
}

@end

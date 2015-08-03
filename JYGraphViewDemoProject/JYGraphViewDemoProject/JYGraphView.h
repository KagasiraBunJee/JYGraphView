//
//  JYGraphView.h
//  JYGraphViewController
//
//  Created by John Yorke on 23/08/2014.
//  Copyright (c) 2014 John Yorke. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum
{
    TOP,
    BOTTOM,
    CENTER,
    CUSTOM
    
}StateBarPosition;

@interface JYGraphView : UIScrollView

// Array of NSNumbers used to plot points on graph
@property (strong, nonatomic) NSArray *graphData;

// Labels to match graphData points
@property (strong, nonatomic) NSArray *graphDataLabels;

// Colour of the graph line
@property (strong, nonatomic) UIColor *strokeColor;

// Fill colour for the point on the graph
@property (strong, nonatomic) UIColor *pointFillColor;

// Width of the stroke of the graph line
@property NSUInteger strokeWidth;

@property NSUInteger maxY;

// Choose whether to hide the graph line and just show points
// defaults to NO
@property (assign) BOOL hideLines;

// Choose whether to hide the points and just show line
// defaults to NO
@property (assign) BOOL hidePoints;

// Choose to show curved line that passes through all points
// defaults to NO (straight lines between points)
@property (assign) BOOL useCurvedLine;

// Choose whether to hide the labels floating above the points
@property (assign) BOOL hideLabels;

// Choose how wide in pts the graph should be
// defaults to width of screen (landscape) x2
@property (assign) NSUInteger graphWidth;

// Background colour for the scrollView
@property (strong, nonatomic) UIColor *backgroundViewColor;

// Colour of the vertical bar that defines each x axis values
@property (strong, nonatomic) UIColor *barColor;

// Font to use on the x and y axis labels
@property (strong, nonatomic) UIFont *labelFont;

// Font colour of the x and y axis labels
@property (strong, nonatomic) UIColor *labelFontColor;

// Colour of the background for the x and y axis UILabels
@property (strong, nonatomic) UIColor *labelBackgroundColor;

@property (assign) NSInteger chartBottomOffset;

@property (strong, nonatomic) NSMutableDictionary *pointsWithBar;

//new

@property (assign) BOOL showBar;

//state bar color
@property (strong, nonatomic) UIColor *stateBarBackgroundColor;

//stateBar width
@property (assign) NSInteger stateBarWidth;

//state bar image
//state bar image size
@property (assign) CGRect stateBarImageSize;

//state bar image background
@property (strong, nonatomic) UIColor *stateBarImageBackgroundColor;

//state bar image name
@property (strong, nonatomic) NSString *stateBarImageName;

//image radius
@property (assign) NSInteger stateBarImageCornerRadius;

//state bar image YValueOffset
@property (assign) NSInteger stateBarImageYOffset;

//state bar image YValueOffset
@property (assign) NSInteger stateBarImageHeight;

//state bar image Y Value
@property (assign) NSInteger stateBarImageYValue;

//state bar label position
@property(assign) StateBarPosition stateBarImagePosition;

//state bar label
//state bar label size
@property (assign) CGRect stateBarLabelSize;

//label radius
@property (assign) NSInteger stateBarLabelCornerRadius;

//label text
@property (assign) NSString *stateBarLabelText;

//state bar label background color
@property (strong, nonatomic) UIColor *stateBarLabelBackgroundColor;

//state bar label text color
@property (strong, nonatomic) UIColor *stateBarLabelTextColor;

//state bar label text font
@property (strong, nonatomic) UIFont *stateBarLabelFont;

//state bar label text size
@property (assign) NSInteger stateBarLabelTextSize;

//state bar label YValueOffset
@property (assign) NSInteger stateBarLabelYOffset;

//state bar label Y Value
@property (assign) NSInteger stateBarLabelYValue;

//state bar label position
@property(assign) StateBarPosition stateBarLabelPosition;

- (void)plotGraphData;

- (UIImage *)graphImage;

@end

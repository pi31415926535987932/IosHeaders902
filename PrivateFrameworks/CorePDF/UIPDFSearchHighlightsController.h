/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, UIPDFPageView, UIPDFSelection;

@interface UIPDFSearchHighlightsController : NSObject {

	NSMutableArray* _searchHighlightLayers;
	UIPDFPageView* _pageView;
	CGColorRef _highlightColor;
	CGColorRef _borderColor;
	CGColorRef _shadowColor;
	char _pageRendered;
	NSMutableArray* _rectangles;
	UIPDFSelection* _selection;

}
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(void)clearSearchHighlights;
-(id)initWithPageView:(id)arg1 ;
-(void)addSearchHighlightForSelection:(id)arg1 animated:(char)arg2 ;
-(char)hasSearchHighlights;
-(void)pageDidRender:(id)arg1 ;
-(void)_addAnimation:(id)arg1 ;
-(void)_addAnimation2:(id)arg1 ;
-(CGRect)unionFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(void)makeType1Shadow:(CGPathRef)arg1 rect:(CGRect)arg2 inset:(CGPoint)arg3 ;
-(void)makeType2Shadow:(CGPathRef)arg1 rect:(CGRect)arg2 ;
-(void)addSearchHighlightForRotatedSelection:(id)arg1 animated:(char)arg2 ;
-(unsigned)indexOfColumnBreakStartingAt:(unsigned)arg1 ;
-(void)makeType1Path:(CGPathRef)arg1 shadowPath:(CGPathRef)arg2 ;
-(void)addLayer:(CGRect)arg1 path:(CGPathRef)arg2 shadowPath:(CGPathRef)arg3 animated:(char)arg4 ;
-(void)makeType2Path:(CGPathRef)arg1 to:(unsigned)arg2 shadowPath:(CGPathRef)arg3 ;
-(void)makeType3Path:(CGPathRef)arg1 from:(unsigned)arg2 to:(unsigned)arg3 shadowPath:(CGPathRef)arg4 ;
-(void)makeType4Path:(CGPathRef)arg1 from:(unsigned)arg2 to:(unsigned)arg3 shadowPath:(CGPathRef)arg4 ;
@end


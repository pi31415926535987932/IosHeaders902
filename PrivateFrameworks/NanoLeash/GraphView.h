/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoLeash/NanoLeash-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, GraphViewSegment, GraphTextView;

@interface GraphView : UIView {

	NSMutableArray* _segments;
	GraphViewSegment* _current;
	GraphTextView* _text;

}

@property (nonatomic,retain) NSMutableArray * segments;               //@synthesize segments=_segments - In the implementation block
@property (assign,nonatomic) GraphViewSegment * current;              //@synthesize current=_current - In the implementation block
@property (nonatomic,retain) GraphTextView * text;                    //@synthesize text=_text - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GraphTextView *)text;
-(void)setText:(GraphTextView *)arg1 ;
-(void)commonInit;
-(id)accessibilityValue;
-(void)addAvgRSSI:(float)arg1 actualRSSI:(float)arg2 ;
-(id)addSegment;
-(void)recycleSegment;
-(GraphViewSegment *)current;
-(void)setCurrent:(GraphViewSegment *)arg1 ;
-(NSMutableArray *)segments;
-(void)setSegments:(NSMutableArray *)arg1 ;
@end


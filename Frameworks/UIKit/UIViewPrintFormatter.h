/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPrintFormatter.h>

@class UIView;

@interface UIViewPrintFormatter : UIPrintFormatter {

	UIView* _view;

}

@property (nonatomic,readonly) UIView * view;              //@synthesize view=_view - In the implementation block
-(UIView *)view;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(int)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(int)arg2 ;
-(id)_initWithView:(id)arg1 ;
@end


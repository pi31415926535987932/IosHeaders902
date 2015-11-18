/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UITouch, UIImageView, UIWebSelectionView;

@interface UIWebSelectionHandle : UIView {

	UITouch* _touch;
	UIImageView* _dragDotView;
	int _position;
	int _textPosition;
	UIWebSelectionView* _selectionView;
	CGSize _touchToCenterOffset;
	CGSize _centerToSelectionPointOffset;

}

@property (nonatomic,retain) UITouch * touch;                                  //@synthesize touch=_touch - In the implementation block
@property (assign,nonatomic) int position;                                     //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) int textPosition; 
@property (nonatomic,readonly) char hasTextPosition; 
@property (nonatomic,readonly) CGSize touchToCenterOffset;                     //@synthesize touchToCenterOffset=_touchToCenterOffset - In the implementation block
@property (assign,nonatomic) CGSize centerToSelectionPointOffset;              //@synthesize centerToSelectionPointOffset=_centerToSelectionPointOffset - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
-(id)initWithPosition:(int)arg1 selectionView:(id)arg2 ;
-(void)snapToCornerOfRange:(id)arg1 atStart:(char)arg2 ;
-(char)hasTextPosition;
-(void)setTextPosition:(int)arg1 ;
-(CGPoint)applyTouchToCenterOffset:(CGPoint)arg1 ;
-(int)textPosition;
-(CGPoint)applyCenterToSelectionPointOffset:(CGPoint)arg1 ;
-(CGPoint)suggestedHandlePositionOnRect:(CGRect)arg1 ;
-(float)offsetInDirectionOfHandleFromFirstPoint:(CGPoint)arg1 toSecondPoint:(CGPoint)arg2 ;
-(CGSize)centerToSelectionPointOffset;
-(void)dropActiveTouch;
-(CGPoint)applyOffsetInDirectionOfHandle:(float)arg1 toPoint:(CGPoint)arg2 ;
-(CGSize)touchToCenterOffset;
-(void)setCenterToSelectionPointOffset:(CGSize)arg1 ;
@end


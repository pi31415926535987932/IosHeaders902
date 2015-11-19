/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIScrollView.h>

@class UIView;

@interface SKUIProductPagePlaceholderScrollView : UIScrollView {

	UIView* _placeholderView;
	float _offset;
	char _isPad;

}

@property (assign,nonatomic) char isPad;                            //@synthesize isPad=_isPad - In the implementation block
@property (nonatomic,retain) UIView * placeholderView;              //@synthesize placeholderView=_placeholderView - In the implementation block
@property (assign,nonatomic) float offset;                          //@synthesize offset=_offset - In the implementation block
-(void)layoutSubviews;
-(void)setOffset:(float)arg1 ;
-(float)offset;
-(void)setIsPad:(char)arg1 ;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(char)isPad;
-(UIView *)placeholderView;
@end

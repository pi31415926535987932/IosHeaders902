/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:37 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView, NSString;

@interface SL_OOPASpinnerTitle : UIView {

	UILabel* _titleView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,copy) NSString * title; 
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)stopAnimating;
-(void)startAnimating;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIButton, UIImage, NSString;

@interface SKUIEmptyContentPlaceholderView : UIView {

	UIEdgeInsets _imageInsets;
	UIImageView* _imageView;
	UILabel* _label;
	UIButton* _signInButton;

}

@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) UIEdgeInsets placeholderImageInsets;              //@synthesize imageInsets=_imageInsets - In the implementation block
@property (nonatomic,copy) NSString * placeholderMessage; 
@property (nonatomic,readonly) UILabel * placeholderMessageLabel; 
@property (assign,nonatomic) char showsSignInButton; 
@property (nonatomic,readonly) UIButton * signInButton; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UILabel *)placeholderMessageLabel;
-(UIButton *)signInButton;
-(void)maskPlaceholdersInBackdropView:(id)arg1 ;
-(NSString *)placeholderMessage;
-(void)setPlaceholderImageInsets:(UIEdgeInsets)arg1 ;
-(void)setPlaceholderMessage:(NSString *)arg1 ;
-(void)setShowsSignInButton:(char)arg1 ;
-(char)showsSignInButton;
-(UIEdgeInsets)placeholderImageInsets;
@end


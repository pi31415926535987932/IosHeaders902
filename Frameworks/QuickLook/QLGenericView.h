/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:45:50 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIView.h>

@protocol QLGenericViewDelegate;
@class UIView, UIImageView, UILabel, UIButton, NSError, NSString, NSAttributedString;

@interface QLGenericView : UIView {

	UIView* _containerView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _showArchiveContentButton;
	NSError* _error;
	id<QLGenericViewDelegate> delegate;

}

@property (copy) NSString * title; 
@property (copy) NSString * subtitle; 
@property (copy) NSAttributedString * attributedSubtitle; 
@property (assign) char showArchiveButton; 
@property (assign) id<QLGenericViewDelegate> delegate; 
-(void)showArchiveContents:(id)arg1 ;
-(void)setShowArchiveButton:(char)arg1 ;
-(void)_updateContainerFrameForTraitCollection:(id)arg1 ;
-(void)setAttributedSubtitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitle;
-(char)showArchiveButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<QLGenericViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<QLGenericViewDelegate>)delegate;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKit/UIView.h>
#import <RemoteUI/RemoteUITableFooter.h>

@protocol RUITableFooterDelegate;
@class UIButton, UILabel, NSURL, NSString;

@interface RemoteUISectionFooter : UIView <RemoteUITableFooter> {

	UIButton* _linkButton;
	UILabel* _textLabel;
	int _textAlignment;
	char _usesCustomTextAlignment;
	id<RUITableFooterDelegate> _delegate;
	NSURL* _linkURL;

}

@property (assign,nonatomic,__weak) id<RUITableFooterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * linkURL;                                         //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,readonly) UIButton * linkButton; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)linkButton;
-(void)setDelegate:(id<RUITableFooterDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<RUITableFooterDelegate>)delegate;
-(void)setTextAlignment:(int)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(id)initWithAttributes:(id)arg1 ;
-(NSURL *)linkURL;
-(void)setLinkURL:(NSURL *)arg1 ;
-(void)_linkPressed;
@end


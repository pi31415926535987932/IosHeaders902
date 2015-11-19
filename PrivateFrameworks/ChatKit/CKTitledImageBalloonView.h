/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageBalloonView.h>

@class UIImageView, UILabel, NSString;

@interface CKTitledImageBalloonView : CKImageBalloonView {

	UIImageView* _chevron;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImageView * chevron;                                      //@synthesize chevron=_chevron - In the implementation block
@property (assign,nonatomic) id<CKTitledImageBalloonViewDelegate> delegate; 
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(void)setOrientation:(char)arg1 ;
-(NSString *)title;
-(UIEdgeInsets)alignmentRectInsets;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(char)arg3 ;
-(void)configureForLocatingChatItem:(id)arg1 ;
@end


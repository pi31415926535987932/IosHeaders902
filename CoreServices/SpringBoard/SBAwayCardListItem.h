/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBAwayListItem.h>

@class SBSCardItem, UIImage, NSString;

@interface SBAwayCardListItem : SBAwayListItem {

	SBSCardItem* _cardItem;
	UIImage* _cardThumbnail;
	UIImage* _iconImage;

}

@property (nonatomic,copy) SBSCardItem * cardItem;                 //@synthesize cardItem=_cardItem - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * body; 
@property (nonatomic,retain) UIImage * iconImage;                  //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * cardThumbnail;              //@synthesize cardThumbnail=_cardThumbnail - In the implementation block
-(void)setCardThumbnail:(UIImage *)arg1 ;
-(void)setCardItem:(SBSCardItem *)arg1 ;
-(UIImage *)cardThumbnail;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)dealloc;
-(NSString *)title;
-(id)sortDate;
-(NSString *)body;
-(UIImage *)iconImage;
-(char)inertWhenLocked;
-(SBSCardItem *)cardItem;
@end


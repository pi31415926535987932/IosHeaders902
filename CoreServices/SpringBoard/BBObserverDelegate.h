/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BBObserverDelegate <NSObject>
@optional
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 playLightsAndSirens:(char)arg4 withReply:(/*^block*/id)arg5;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned)arg3;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned)arg3;
-(void)observer:(id)arg1 removeBulletin:(id)arg2;
-(void)observer:(id)arg1 updateSectionOrderRule:(int)arg2;
-(void)observer:(id)arg1 updateSectionOrder:(id)arg2;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2;
-(void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
-(char)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
-(char)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
-(id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(int)arg2;
-(id)observer:(id)arg1 multipleThumbnailSizeConstraintsForAttachmentType:(int)arg2;
-(id)observer:(id)arg1 composedAttachmentImageForType:(int)arg2 thumbnailData:(id)arg3 key:(id)arg4;
-(CGSize*)observer:(id)arg1 composedAttachmentSizeForType:(int)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(id)arg5;
-(void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;
-(void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned)arg2;
-(void)observer:(id)arg1 noteAlertBehaviorOverrideStateChanged:(unsigned)arg2;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(char)arg2;
-(void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2;

@end


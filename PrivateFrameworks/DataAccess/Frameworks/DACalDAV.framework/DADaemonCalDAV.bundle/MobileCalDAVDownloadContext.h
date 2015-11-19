/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DAEventsAttachmentDownloadConsumer;
@class NSString;

@interface MobileCalDAVDownloadContext : NSObject {

	id<DAEventsAttachmentDownloadConsumer> _consumer;
	NSString* _attachmentUUID;

}

@property (assign,nonatomic,__weak) id<DAEventsAttachmentDownloadConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,retain) NSString * attachmentUUID;                                           //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
+(id)contextWithAttachmentUUID:(id)arg1 consumer:(id)arg2 ;
-(void)setConsumer:(id<DAEventsAttachmentDownloadConsumer>)arg1 ;
-(id<DAEventsAttachmentDownloadConsumer>)consumer;
-(id)initWithAttachmentUUID:(id)arg1 consumer:(id)arg2 ;
-(NSString *)attachmentUUID;
-(void)setAttachmentUUID:(NSString *)arg1 ;
@end


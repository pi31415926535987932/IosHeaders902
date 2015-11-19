/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject {

	MFLock* _attachmentsLock;
	NSMutableDictionary* _attachmentsByURL;

}
+(id)allSources;
+(id)_setOfAllSources;
-(void)removeAttachmentForURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)attachmentForURL:(id)arg1 ;
-(char)setAttachment:(id)arg1 forURL:(id)arg2 ;
@end


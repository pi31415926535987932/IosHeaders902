/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFMailMessage;

@interface _MFMailComposeAttachmentLoader : NSObject {

	MFMailMessage* _message;
	id _content;
	char _isDraft;
	/*^block*/id _completionBlock;

}
-(id)initWithMessage:(id)arg1 content:(id)arg2 isDraft:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)loadAttachments;
-(void)dealloc;
@end


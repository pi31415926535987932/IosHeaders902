/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface MFMessageWriter : NSObject {

	Class _messageClassToInstantiate;
	unsigned _allows8BitMimeParts : 1;
	unsigned _allowsBinaryMimeParts : 1;
	unsigned _writeSizeDispositionParameter : 1;
	unsigned _allowsQuotedPrintable : 1;
	id _delegate;
	NSDictionary* _compositionSpecification;

}

@property (assign,nonatomic) id delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * compositionSpecification;              //@synthesize compositionSpecification=_compositionSpecification - In the implementation block
-(id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 charsets:(id)arg4 headers:(id)arg5 ;
-(NSDictionary *)compositionSpecification;
-(id)createMessageWithPlainTextDocumentsAndAttachments:(id)arg1 headers:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(id)initWithCompositionSpecification:(id)arg1 ;
-(void)setAllowsQuotedPrintable:(char)arg1 ;
-(void)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3 ;
-(id)createMessageWithString:(id)arg1 headers:(id)arg2 ;
-(id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4 ;
-(id)createMessageWithHtmlString:(id)arg1 attachments:(id)arg2 headers:(id)arg3 ;
-(char)allows8BitMimeParts;
-(void)setAllows8BitMimeParts:(char)arg1 ;
-(char)allowsBinaryMimeParts;
-(void)setAllowsBinaryMimeParts:(char)arg1 ;
-(char)allowsQuotedPrintable;
-(void)setWriteSizeDispositionParameter:(char)arg1 ;
-(void)setMessageClassToInstantiate:(Class)arg1 ;
@end


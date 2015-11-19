/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFMessage, MailAccount, DeliveryAccount, MFDeliveryResult, MFMutableMessageHeaders, NSDictionary, NSArray, NSString, MFPlainTextDocument;

@interface MFMailDelivery : NSObject {

	id _delegate;
	MFMessage* _message;
	MailAccount* _archiveAccount;
	DeliveryAccount* _account;
	MFDeliveryResult* _result;
	MFMutableMessageHeaders* _headers;
	NSDictionary* _compositionSpecification;
	NSArray* _mixedContent;
	char _textPartsAreHTML;
	NSString* _htmlString;
	MFPlainTextDocument* _plainTextAlternative;
	NSArray* _otherStringsAndAttachments;
	NSArray* _charsets;
	unsigned _threaded : 1;
	unsigned _useCellDataOnly : 1;
	char _isUserRequested;
	unsigned long long _conversationFlags;

}

@property (nonatomic,retain) NSDictionary * compositionSpecification;              //@synthesize compositionSpecification=_compositionSpecification - In the implementation block
@property (assign,nonatomic) unsigned long long conversationFlags;                 //@synthesize conversationFlags=_conversationFlags - In the implementation block
@property (assign,nonatomic) char isUserRequested;                                 //@synthesize isUserRequested=_isUserRequested - In the implementation block
+(id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
+(id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(char)arg3 ;
+(id)newWithMessage:(id)arg1 ;
+(char)deliverMessage:(id)arg1 ;
-(unsigned long long)conversationFlags;
-(void)setArchiveAccount:(id)arg1 ;
-(NSDictionary *)compositionSpecification;
-(void)setCompositionSpecification:(NSDictionary *)arg1 ;
-(void)setConversationFlags:(unsigned long long)arg1 ;
-(id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
-(id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(char)arg3 ;
-(id)deliverSynchronously;
-(void)archive;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(id)message;
-(id)newMessageWriter;
-(id)originalHeaders;
-(id)headersForDelivery;
-(id)deliverMessageData:(id)arg1 toRecipients:(id)arg2 ;
-(id)archiveAccount;
-(int)deliveryStatus;
-(id)deliveryResult;
-(char)shouldSignMessage;
-(char)shouldEncryptMessage;
-(void)deliverAsynchronously;
-(void)setCellDataOnly:(char)arg1 ;
-(char)isUserRequested;
-(void)setIsUserRequested:(char)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(id)account;
@end


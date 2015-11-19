/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, DEExtensionHostContext, NSExtension;

@interface DEExtension : NSObject {

	char _isLoggingEnabled;
	char _allowUserAttachmentSelection;
	NSString* _attachmentsName;
	NSString* _identifier;
	NSString* _loggingConsent;
	DEExtensionHostContext* _context;
	NSExtension* _extension;

}

@property (nonatomic,retain) NSString * attachmentsName;                     //@synthesize attachmentsName=_attachmentsName - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char isLoggingEnabled;                          //@synthesize isLoggingEnabled=_isLoggingEnabled - In the implementation block
@property (nonatomic,retain) NSString * loggingConsent;                      //@synthesize loggingConsent=_loggingConsent - In the implementation block
@property (assign,nonatomic) char allowUserAttachmentSelection;              //@synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection - In the implementation block
@property (nonatomic,retain) DEExtensionHostContext * context;               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                        //@synthesize extension=_extension - In the implementation block
-(id)description;
-(NSString *)identifier;
-(DEExtensionHostContext *)context;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setContext:(DEExtensionHostContext *)arg1 ;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)attachmentListWithHandler:(/*^block*/id)arg1 ;
-(void)endUsingExtension;
-(void)performWithHostContext:(/*^block*/id)arg1 ;
-(void)attachmentsForParameters:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(id)initWithNSExtension:(id)arg1 ;
-(void)loadExtendedInfo;
-(void)getAttachmentsWithParameters:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(NSString *)attachmentsName;
-(void)setAttachmentsName:(NSString *)arg1 ;
-(void)setIsLoggingEnabled:(char)arg1 ;
-(NSString *)loggingConsent;
-(void)setLoggingConsent:(NSString *)arg1 ;
-(char)allowUserAttachmentSelection;
-(void)setAllowUserAttachmentSelection:(char)arg1 ;
-(char)isLoggingEnabled;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MFComposeTypeFactory : NSObject
+(unsigned)imageScaleFromUserDefaults;
+(void)setupWithCompositionModel:(id)arg1 delegate:(id)arg2 ;
+(void)setupWithContent:(id)arg1 delegate:(id)arg2 ;
+(id)messageFromDelegate:(id)arg1 withSubstituteDOMDocument:(id)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4 ;
+(id)headersFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
+(void)hijackThreadFromDelegate:(id)arg1 ;
+(id)_markupStringForExcludedInlineAttachmentWithFilename:(id)arg1 ;
+(id)_markupForInlineAttachment:(id)arg1 willBeIncluded:(char)arg2 prependBlankLine:(char)arg3 delegate:(id)arg4 ;
+(void)_setContent:(id)arg1 includeAttachments:(char)arg2 shouldQuote:(char)arg3 prependBlankLine:(char)arg4 delegate:(id)arg5 ;
+(void)_prependQuotedMarkup:(id)arg1 shouldIndent:(char)arg2 toBodyField:(id)arg3 ;
+(void)_prependPreamble:(id)arg1 toBodyField:(id)arg2 ;
+(void)_mergeModel:(id)arg1 withDelegate:(id)arg2 ;
+(void)_updateDelegate:(id)arg1 toRecipients:(id)arg2 ccRecipients:(id)arg3 bccRecipients:(id)arg4 ;
+(void)_quoteFromModel:(id)arg1 delegate:(id)arg2 ;
+(void)_sanitizeRecipientsForComposeType:(unsigned)arg1 sendingAddress:(id)arg2 delegate:(id)arg3 ;
+(void)_setupForReplyWithModel:(id)arg1 delegate:(id)arg2 ;
+(void)_setupForReplyAllWithModel:(id)arg1 delegate:(id)arg2 ;
+(void)_setupForForwardWithModel:(id)arg1 delegate:(id)arg2 ;
+(void)_setupForNewMessageWithModel:(id)arg1 delegate:(id)arg2 ;
+(id)headersFromDelegate:(id)arg1 ;
+(void)addAttachment:(id)arg1 prepend:(char)arg2 withCompositionModel:(id)arg3 delegate:(id)arg4 ;
+(id)messageFromDelegate:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
+(id)subjectFromSubject:(id)arg1 withComposeType:(int)arg2 ;
@end


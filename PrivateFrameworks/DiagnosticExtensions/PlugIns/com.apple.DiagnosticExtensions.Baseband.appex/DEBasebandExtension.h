/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/PlugIns/com.apple.DiagnosticExtensions.Baseband.appex/com.apple.DiagnosticExtensions.Baseband
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DiagnosticExtensions/DEExtensionProvider.h>

@class NSURL;

@interface DEBasebandExtension : DEExtensionProvider {

	NSURL* _basebandRootURL;

}

@property (nonatomic,retain) NSURL * basebandRootURL;              //@synthesize basebandRootURL=_basebandRootURL - In the implementation block
+(id)groupNameForURL:(id)arg1 ;
-(void)setBasebandRootURL:(NSURL *)arg1 ;
-(NSURL *)basebandRootURL;
-(id)init;
-(id)attachmentsForParameters:(id)arg1 ;
-(id)attachmentList;
@end


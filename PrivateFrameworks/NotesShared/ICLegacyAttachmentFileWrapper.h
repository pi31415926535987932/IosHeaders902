/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface ICLegacyAttachmentFileWrapper : NSFileWrapper <NSSecureCoding> {

	NSURL* _cidURL;

}

@property (nonatomic,retain) NSURL * cidURL;                                 //@synthesize cidURL=_cidURL - In the implementation block
@property (nonatomic,readonly) NSString * attachmentIdentifier; 
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCIDURL:(id)arg1 ;
-(NSString *)attachmentIdentifier;
-(void)setCidURL:(NSURL *)arg1 ;
-(NSURL *)cidURL;
@end


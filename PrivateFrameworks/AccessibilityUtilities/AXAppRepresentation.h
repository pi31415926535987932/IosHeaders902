/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AXAppRepresentation : NSObject <NSSecureCoding> {

	int _pid;
	NSString* _bundleIdentifier;
	int _layoutRole;

}

@property (assign,nonatomic) int pid;                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) int layoutRole;                              //@synthesize layoutRole=_layoutRole - In the implementation block
@property (nonatomic,readonly) char isLayoutPrimary; 
@property (nonatomic,readonly) char isLayoutFullscreenModal; 
+(char)supportsSecureCoding;
+(id)appWithPID:(int)arg1 bundleID:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)bundleIdentifier;
-(void)_commonInit;
-(void)setLayoutRole:(int)arg1 ;
-(char)isLayoutPrimary;
-(char)isLayoutFullscreenModal;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(int)layoutRole;
-(void)setPid:(int)arg1 ;
-(int)pid;
@end


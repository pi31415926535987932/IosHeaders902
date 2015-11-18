/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSExtension, NSUUID;

@interface _UIRemoteViewService : NSObject {

	NSExtension* _extension;
	NSUUID* _contextToken;

}

@property (nonatomic,retain) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) id<PKPlugIn> plugin; 
@property (nonatomic,copy) NSUUID * contextToken;                  //@synthesize contextToken=_contextToken - In the implementation block
-(id)initWithExtension:(id)arg1 andContextToken:(id)arg2 ;
-(id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2 ;
-(void)setPlugin:(id<PKPlugIn>)arg1 ;
-(id<PKPlugIn>)plugin;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSUUID *)contextToken;
-(void)setContextToken:(NSUUID *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Support/fud
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol FudPlugin, NSCoding;
@class NSString, FudHistory, FudStateMachine, NSData;

@interface FudStorageItem : NSObject <NSCoding> {

	NSString* pluginName;
	NSString* filterName;
	FudHistory* history;
	FudStateMachine* stateMachine;
	id<FudPlugin> plugin;
	NSData* pluginData;
	NSString* pluginVersion;
	id<NSCoding> _context;

}

@property (readonly) NSString * pluginName; 
@property (readonly) NSString * filterName; 
@property (retain) id<NSCoding> context;                        //@synthesize context=_context - In the implementation block
@property (retain) FudHistory * history; 
@property (retain) FudStateMachine * stateMachine; 
@property (readonly) NSData * pluginData; 
@property (readonly) NSString * pluginVersion; 
@property (retain) id<FudPlugin> plugin; 
-(NSString *)pluginName;
-(NSString *)filterName;
-(id)initWithPluginName:(id)arg1 filterName:(id)arg2 ;
-(NSData *)pluginData;
-(NSString *)pluginVersion;
-(id)getPluginInstanceFromData;
-(char)setPlugin:(id)arg1 withVersion:(id)arg2 ;
-(char)syncPluginWithData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id<NSCoding>)context;
-(void)setContext:(id<NSCoding>)arg1 ;
-(void)setPlugin:(id<FudPlugin>)arg1 ;
-(id<FudPlugin>)plugin;
-(FudStateMachine *)stateMachine;
-(void)setStateMachine:(FudStateMachine *)arg1 ;
-(FudHistory *)history;
-(void)setHistory:(FudHistory *)arg1 ;
@end

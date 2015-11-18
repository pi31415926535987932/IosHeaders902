/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:45:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray;

@interface CAWindowServer : NSObject {

	CAWindowServerImpl* _impl;

}

@property (readonly) NSArray * displays; 
@property (getter=isMirroringEnabled) char mirroringEnabled; 
@property (assign) unsigned rendererFlags; 
@property (getter=isSecure) char secure; 
+(id)server;
+(id)contextWithOptions:(id)arg1 ;
+(id)context;
+(id)serverIfRunning;
-(void)setMirroringEnabled:(char)arg1 ;
-(void)addDisplay:(id)arg1 ;
-(void)removeDisplay:(id)arg1 ;
-(id)displayWithName:(id)arg1 ;
-(id)displayWithDisplayId:(unsigned)arg1 ;
-(id)displayWithUniqueId:(id)arg1 ;
-(void)_detectDisplays;
-(char)isMirroringEnabled;
-(unsigned)rendererFlags;
-(id)secureModeViolations;
-(id)insecureProcessIds;
-(unsigned)clientPortOfContextId:(unsigned)arg1 ;
-(unsigned)taskPortOfContextId:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)_init;
-(void)setRendererFlags:(unsigned)arg1 ;
-(NSArray *)displays;
-(void)setSecure:(char)arg1 ;
-(char)isSecure;
-(unsigned)contextIdHostingContextId:(unsigned)arg1 ;
-(void)removeAllDisplays;
@end


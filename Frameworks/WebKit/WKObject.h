/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:38 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSObject, NSString;

@interface WKObject : NSObject <WKObject> {

	char _hasInitializedTarget;
	NSObject* _target;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(Class)classForKeyedArchiver;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(char)isKindOfClass:(Class)arg1 ;
-(char)isEqual:(id)arg1 ;
-(char)isMemberOfClass:(Class)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(Class)classForCoder;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(Object*)_apiObject;
-(id)_web_createTarget;
@end


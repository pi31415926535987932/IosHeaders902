/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:25:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class JSContext, NSMutableDictionary, NSMapTable;

@interface JSWrapperMap : NSObject {

	JSContext* m_context;
	NSMutableDictionary* m_classMap;
	unique_ptr<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> >, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > > >* m_cachedJSWrappers;
	NSMapTable* m_cachedObjCWrappers;

}
-(id)classInfoForClass:(Class)arg1 ;
-(id)jsWrapperForObject:(id)arg1 ;
-(id)objcWrapperForJSValueRef:(OpaqueJSValueRef)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
@end

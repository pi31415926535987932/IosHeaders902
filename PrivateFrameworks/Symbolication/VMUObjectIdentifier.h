/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class VMUClassInfoMap, NSMutableDictionary, NSMapTable, NSMutableSet, NSHashTable, VMUNonOverlappingRangeArray;

@interface VMUObjectIdentifier : NSObject {

	unsigned _task;
	CSTypeRef _symbolicator;
	/*^block*/id _memoryReader;
	VMUClassInfoMap* _realizedIsaToClassInfo;
	VMUClassInfoMap* _unrealizedClassInfos;
	NSMutableDictionary* _nonobjectClassInfosDict;
	unsigned long _coreFoundationCFTypeIsa;
	unsigned long _foundationCFTypeIsa;
	unsigned _swiftClassCount;
	unsigned _cfClassCount;
	/*^block*/id _isaTranslator;
	unsigned* _nonPointerIndexMapping;
	void* _remoteObjectBuffer;
	unsigned long _remoteObjectBufferSize;
	NSMapTable* _isaToObjectLabelHandlerMap;
	NSMapTable* _itemCountToLabelStringUniquingMap;
	VMULabelUniquingDataForStringType* _stringToLabelStringUniquingData;
	NSMutableSet* _stringUniquingSet;
	NSHashTable* _objcRuntimeMallocBlocksHash;
	VMUNonOverlappingRangeArray* _targetProcessVMranges;

}

@property (nonatomic,readonly) VMUClassInfoMap * realizedClasses;              //@synthesize realizedIsaToClassInfo=_realizedIsaToClassInfo - In the implementation block
-(id)initWithTask:(unsigned)arg1 ;
-(void)dealloc;
-(void)findCFTypes;
-(void)findObjCclasses;
-(void)enumerateRealizedClassInfosWithBlock:(/*^block*/id)arg1 ;
-(id)classInfoForMemory:(void*)arg1 length:(unsigned)arg2 ;
-(id)_classInfoWithNonobjectType:(id)arg1 binaryPath:(id)arg2 ;
-(id)classInfoForNonobjectMemory:(void*)arg1 length:(unsigned)arg2 ;
-(id)_faultClass:(unsigned long long)arg1 ofType:(int)arg2 ;
-(id)osMajorMinorVersionString;
-(void)buildIsaToObjectLabelHandlerMap;
-(id)labelForNSString:(id)arg1 mappedSize:(unsigned)arg2 remoteAddress:(unsigned)arg3 printDetail:(char)arg4 ;
-(id)uniquifyStringLabel:(id)arg1 stringType:(int)arg2 printDetail:(char)arg3 ;
-(id)objectLabelHandlerForRemoteIsa:(unsigned)arg1 ;
-(id)labelForNSString:(id)arg1 ;
-(id)labelForNSCFStringAtRemoteAddress:(unsigned)arg1 printDetail:(char)arg2 ;
-(id)labelForNSURL:(id)arg1 ;
-(id)labelForMallocBlock:(VMURange)arg1 usingHandlerBlock:(/*^block*/id)arg2 ;
-(id)labelForItemCount:(long)arg1 ;
-(id)labelForNSDictionary:(id)arg1 ;
-(id)labelForNSSet:(id)arg1 ;
-(id)labelForMemory:(void*)arg1 length:(unsigned)arg2 usingHandlerBlock:(/*^block*/id)arg3 ;
-(id)initWithTask:(unsigned)arg1 symbolicator:(CSTypeRef)arg2 ;
-(id)classInfoForObjectWithRange:(VMURange)arg1 ;
-(unsigned)CFTypeCount;
-(unsigned)ObjCclassCount;
-(unsigned)SwiftClassCount;
-(id)objcRuntimeMallocBlocksHash;
-(void)enumerateAllClassInfosWithBlock:(/*^block*/id)arg1 ;
-(id)nullClassInfo;
-(VMURange)vmRegionRangeForAddress:(unsigned long long)arg1 ;
-(id)labelForNSConcreteAttributedString:(id)arg1 ;
-(id)labelForNSPathStore2:(id)arg1 ;
-(id)labelForNSNumber:(id)arg1 ;
-(id)labelForNSDate:(id)arg1 ;
-(id)labelForNSArray:(id)arg1 ;
-(id)labelForNSCFDictionary:(id)arg1 ;
-(id)labelForNSConcreteHashTable:(id)arg1 ;
-(id)labelForNSCFSet:(id)arg1 ;
-(id)labelForNSData:(id)arg1 ;
-(id)labelForNSConcreteData:(id)arg1 ;
-(id)labelForNSConcreteMutableData:(id)arg1 ;
-(id)labelForNSInlineData:(id)arg1 ;
-(id)labelForOSTransaction:(id)arg1 ;
-(id)labelForMallocBlock:(VMURange)arg1 ;
-(id)labelForMemory:(void*)arg1 length:(unsigned)arg2 ;
-(id)classInfoForObject:(unsigned long long)arg1 ;
-(id)classInfoForIsaPointer:(unsigned)arg1 ;
-(id)classInfoForCFType:(_CFRuntimeBase*)arg1 ;
-(VMUClassInfoMap *)realizedClasses;
@end


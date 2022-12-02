#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x00000008 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000009 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000A TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x0000000D System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x00000010 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000017 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000018 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000019 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001D System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000020 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000021 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000022 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000024 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000025 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000026 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000029 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002D System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000030 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000031 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000032 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000033 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000034 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000035 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000036 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000037 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000038 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000039 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000003A System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000003B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x0000003C System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000003D System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000003E System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000003F TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000040 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x00000041 System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000042 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000043 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000044 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000045 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000046 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000047 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000048 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000049 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000004A System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000004B System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000004C System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000004D TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000004E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000004F System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000050 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000051 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000052 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000053 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000054 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000055 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000056 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000057 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000058 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000059 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000005A System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000005B TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000005C System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000005D System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000005E System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x0000005F System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000060 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000061 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x00000062 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000064 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000065 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000066 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000067 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000068 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000069 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000006A System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000006D System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000006E System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000006F System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000070 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000071 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000072 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x00000073 System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x00000074 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000075 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000076 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000077 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000078 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x00000079 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x0000007A System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000007B System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000007C System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000007D System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000007E T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000007F System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000080 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[128] = 
{
	Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD,
	Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D,
	Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[128] = 
{
	3989,
	4173,
	4173,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[36] = 
{
	{ 0x02000004, { 61, 4 } },
	{ 0x02000005, { 65, 9 } },
	{ 0x02000006, { 74, 7 } },
	{ 0x02000007, { 81, 10 } },
	{ 0x02000008, { 91, 1 } },
	{ 0x02000009, { 92, 12 } },
	{ 0x0200000A, { 104, 6 } },
	{ 0x0200000C, { 110, 3 } },
	{ 0x0200000D, { 115, 5 } },
	{ 0x0200000E, { 120, 7 } },
	{ 0x0200000F, { 127, 3 } },
	{ 0x02000010, { 130, 7 } },
	{ 0x02000011, { 137, 4 } },
	{ 0x02000012, { 141, 34 } },
	{ 0x02000014, { 175, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 5 } },
	{ 0x06000006, { 15, 1 } },
	{ 0x06000007, { 16, 2 } },
	{ 0x06000008, { 18, 2 } },
	{ 0x06000009, { 20, 1 } },
	{ 0x0600000A, { 21, 3 } },
	{ 0x0600000B, { 24, 2 } },
	{ 0x0600000C, { 26, 1 } },
	{ 0x0600000D, { 27, 7 } },
	{ 0x0600000E, { 34, 1 } },
	{ 0x0600000F, { 35, 2 } },
	{ 0x06000010, { 37, 4 } },
	{ 0x06000011, { 41, 4 } },
	{ 0x06000012, { 45, 3 } },
	{ 0x06000013, { 48, 1 } },
	{ 0x06000014, { 49, 3 } },
	{ 0x06000015, { 52, 2 } },
	{ 0x06000016, { 54, 2 } },
	{ 0x06000017, { 56, 5 } },
	{ 0x06000048, { 113, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[177] = 
{
	{ (Il2CppRGCTXDataType)2, 1747 },
	{ (Il2CppRGCTXDataType)3, 8286 },
	{ (Il2CppRGCTXDataType)2, 2969 },
	{ (Il2CppRGCTXDataType)2, 2564 },
	{ (Il2CppRGCTXDataType)3, 15565 },
	{ (Il2CppRGCTXDataType)2, 1850 },
	{ (Il2CppRGCTXDataType)2, 2568 },
	{ (Il2CppRGCTXDataType)3, 15587 },
	{ (Il2CppRGCTXDataType)2, 2566 },
	{ (Il2CppRGCTXDataType)3, 15575 },
	{ (Il2CppRGCTXDataType)2, 630 },
	{ (Il2CppRGCTXDataType)3, 19 },
	{ (Il2CppRGCTXDataType)3, 20 },
	{ (Il2CppRGCTXDataType)2, 1222 },
	{ (Il2CppRGCTXDataType)3, 6302 },
	{ (Il2CppRGCTXDataType)3, 17729 },
	{ (Il2CppRGCTXDataType)2, 639 },
	{ (Il2CppRGCTXDataType)3, 81 },
	{ (Il2CppRGCTXDataType)2, 2202 },
	{ (Il2CppRGCTXDataType)3, 11990 },
	{ (Il2CppRGCTXDataType)3, 7064 },
	{ (Il2CppRGCTXDataType)2, 772 },
	{ (Il2CppRGCTXDataType)3, 862 },
	{ (Il2CppRGCTXDataType)3, 863 },
	{ (Il2CppRGCTXDataType)2, 1851 },
	{ (Il2CppRGCTXDataType)3, 8950 },
	{ (Il2CppRGCTXDataType)3, 17748 },
	{ (Il2CppRGCTXDataType)2, 906 },
	{ (Il2CppRGCTXDataType)3, 1979 },
	{ (Il2CppRGCTXDataType)2, 1444 },
	{ (Il2CppRGCTXDataType)2, 1510 },
	{ (Il2CppRGCTXDataType)3, 6304 },
	{ (Il2CppRGCTXDataType)3, 6305 },
	{ (Il2CppRGCTXDataType)3, 1980 },
	{ (Il2CppRGCTXDataType)3, 17715 },
	{ (Il2CppRGCTXDataType)2, 635 },
	{ (Il2CppRGCTXDataType)3, 56 },
	{ (Il2CppRGCTXDataType)2, 1672 },
	{ (Il2CppRGCTXDataType)2, 1342 },
	{ (Il2CppRGCTXDataType)2, 1436 },
	{ (Il2CppRGCTXDataType)2, 1507 },
	{ (Il2CppRGCTXDataType)2, 1673 },
	{ (Il2CppRGCTXDataType)2, 1343 },
	{ (Il2CppRGCTXDataType)2, 1437 },
	{ (Il2CppRGCTXDataType)2, 1508 },
	{ (Il2CppRGCTXDataType)2, 1438 },
	{ (Il2CppRGCTXDataType)2, 1509 },
	{ (Il2CppRGCTXDataType)3, 6303 },
	{ (Il2CppRGCTXDataType)2, 1427 },
	{ (Il2CppRGCTXDataType)2, 1428 },
	{ (Il2CppRGCTXDataType)2, 1505 },
	{ (Il2CppRGCTXDataType)3, 6301 },
	{ (Il2CppRGCTXDataType)2, 1341 },
	{ (Il2CppRGCTXDataType)2, 1435 },
	{ (Il2CppRGCTXDataType)2, 1340 },
	{ (Il2CppRGCTXDataType)3, 17705 },
	{ (Il2CppRGCTXDataType)3, 5843 },
	{ (Il2CppRGCTXDataType)2, 1120 },
	{ (Il2CppRGCTXDataType)2, 1430 },
	{ (Il2CppRGCTXDataType)2, 1506 },
	{ (Il2CppRGCTXDataType)2, 1571 },
	{ (Il2CppRGCTXDataType)3, 8287 },
	{ (Il2CppRGCTXDataType)3, 8289 },
	{ (Il2CppRGCTXDataType)2, 443 },
	{ (Il2CppRGCTXDataType)3, 8288 },
	{ (Il2CppRGCTXDataType)3, 8297 },
	{ (Il2CppRGCTXDataType)2, 1750 },
	{ (Il2CppRGCTXDataType)2, 2567 },
	{ (Il2CppRGCTXDataType)3, 15576 },
	{ (Il2CppRGCTXDataType)3, 8298 },
	{ (Il2CppRGCTXDataType)2, 1471 },
	{ (Il2CppRGCTXDataType)2, 1532 },
	{ (Il2CppRGCTXDataType)3, 6311 },
	{ (Il2CppRGCTXDataType)3, 17699 },
	{ (Il2CppRGCTXDataType)3, 8290 },
	{ (Il2CppRGCTXDataType)2, 1749 },
	{ (Il2CppRGCTXDataType)2, 2565 },
	{ (Il2CppRGCTXDataType)3, 15566 },
	{ (Il2CppRGCTXDataType)3, 6310 },
	{ (Il2CppRGCTXDataType)3, 8291 },
	{ (Il2CppRGCTXDataType)3, 17698 },
	{ (Il2CppRGCTXDataType)3, 8304 },
	{ (Il2CppRGCTXDataType)2, 1751 },
	{ (Il2CppRGCTXDataType)2, 2569 },
	{ (Il2CppRGCTXDataType)3, 15588 },
	{ (Il2CppRGCTXDataType)3, 9010 },
	{ (Il2CppRGCTXDataType)3, 5042 },
	{ (Il2CppRGCTXDataType)3, 6312 },
	{ (Il2CppRGCTXDataType)3, 5041 },
	{ (Il2CppRGCTXDataType)3, 8305 },
	{ (Il2CppRGCTXDataType)3, 17700 },
	{ (Il2CppRGCTXDataType)3, 6308 },
	{ (Il2CppRGCTXDataType)3, 84 },
	{ (Il2CppRGCTXDataType)3, 83 },
	{ (Il2CppRGCTXDataType)2, 1466 },
	{ (Il2CppRGCTXDataType)2, 1528 },
	{ (Il2CppRGCTXDataType)3, 6309 },
	{ (Il2CppRGCTXDataType)2, 1478 },
	{ (Il2CppRGCTXDataType)2, 1545 },
	{ (Il2CppRGCTXDataType)3, 86 },
	{ (Il2CppRGCTXDataType)2, 573 },
	{ (Il2CppRGCTXDataType)2, 640 },
	{ (Il2CppRGCTXDataType)3, 82 },
	{ (Il2CppRGCTXDataType)3, 85 },
	{ (Il2CppRGCTXDataType)3, 58 },
	{ (Il2CppRGCTXDataType)2, 440 },
	{ (Il2CppRGCTXDataType)3, 60 },
	{ (Il2CppRGCTXDataType)2, 636 },
	{ (Il2CppRGCTXDataType)3, 57 },
	{ (Il2CppRGCTXDataType)3, 59 },
	{ (Il2CppRGCTXDataType)2, 633 },
	{ (Il2CppRGCTXDataType)3, 30 },
	{ (Il2CppRGCTXDataType)3, 11975 },
	{ (Il2CppRGCTXDataType)2, 2203 },
	{ (Il2CppRGCTXDataType)3, 11991 },
	{ (Il2CppRGCTXDataType)2, 773 },
	{ (Il2CppRGCTXDataType)3, 864 },
	{ (Il2CppRGCTXDataType)3, 11981 },
	{ (Il2CppRGCTXDataType)3, 5014 },
	{ (Il2CppRGCTXDataType)2, 462 },
	{ (Il2CppRGCTXDataType)3, 11976 },
	{ (Il2CppRGCTXDataType)2, 2199 },
	{ (Il2CppRGCTXDataType)3, 1268 },
	{ (Il2CppRGCTXDataType)2, 790 },
	{ (Il2CppRGCTXDataType)2, 1105 },
	{ (Il2CppRGCTXDataType)3, 5020 },
	{ (Il2CppRGCTXDataType)3, 11977 },
	{ (Il2CppRGCTXDataType)3, 5009 },
	{ (Il2CppRGCTXDataType)3, 5010 },
	{ (Il2CppRGCTXDataType)3, 5008 },
	{ (Il2CppRGCTXDataType)3, 5011 },
	{ (Il2CppRGCTXDataType)2, 1101 },
	{ (Il2CppRGCTXDataType)2, 3042 },
	{ (Il2CppRGCTXDataType)3, 6307 },
	{ (Il2CppRGCTXDataType)3, 5013 },
	{ (Il2CppRGCTXDataType)2, 1410 },
	{ (Il2CppRGCTXDataType)3, 5012 },
	{ (Il2CppRGCTXDataType)2, 1344 },
	{ (Il2CppRGCTXDataType)2, 3001 },
	{ (Il2CppRGCTXDataType)2, 1445 },
	{ (Il2CppRGCTXDataType)2, 1511 },
	{ (Il2CppRGCTXDataType)3, 5862 },
	{ (Il2CppRGCTXDataType)2, 1129 },
	{ (Il2CppRGCTXDataType)3, 6873 },
	{ (Il2CppRGCTXDataType)3, 6874 },
	{ (Il2CppRGCTXDataType)2, 1315 },
	{ (Il2CppRGCTXDataType)3, 6877 },
	{ (Il2CppRGCTXDataType)2, 1315 },
	{ (Il2CppRGCTXDataType)3, 6878 },
	{ (Il2CppRGCTXDataType)2, 1345 },
	{ (Il2CppRGCTXDataType)3, 6882 },
	{ (Il2CppRGCTXDataType)3, 6886 },
	{ (Il2CppRGCTXDataType)3, 6885 },
	{ (Il2CppRGCTXDataType)2, 3068 },
	{ (Il2CppRGCTXDataType)3, 6876 },
	{ (Il2CppRGCTXDataType)3, 6875 },
	{ (Il2CppRGCTXDataType)3, 6883 },
	{ (Il2CppRGCTXDataType)2, 1579 },
	{ (Il2CppRGCTXDataType)3, 6880 },
	{ (Il2CppRGCTXDataType)3, 18092 },
	{ (Il2CppRGCTXDataType)2, 1106 },
	{ (Il2CppRGCTXDataType)3, 5035 },
	{ (Il2CppRGCTXDataType)1, 1407 },
	{ (Il2CppRGCTXDataType)2, 3009 },
	{ (Il2CppRGCTXDataType)3, 6879 },
	{ (Il2CppRGCTXDataType)1, 3009 },
	{ (Il2CppRGCTXDataType)1, 1579 },
	{ (Il2CppRGCTXDataType)2, 3068 },
	{ (Il2CppRGCTXDataType)2, 3009 },
	{ (Il2CppRGCTXDataType)2, 1447 },
	{ (Il2CppRGCTXDataType)2, 1513 },
	{ (Il2CppRGCTXDataType)3, 6884 },
	{ (Il2CppRGCTXDataType)3, 6881 },
	{ (Il2CppRGCTXDataType)3, 6887 },
	{ (Il2CppRGCTXDataType)2, 330 },
	{ (Il2CppRGCTXDataType)3, 5043 },
	{ (Il2CppRGCTXDataType)2, 452 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	128,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	36,
	s_rgctxIndices,
	177,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
